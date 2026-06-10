
![SparkFun How To Arduino Library](docs/images/gh-banner-howto-demo.png  "SparkFun HowTo Arduino Library")

# SparkFun How To Arduino Library

<!--  Update this with a single sentence about this library -->

GitHub repository that outlines how to build a modern SpakRun Arduino Library, which includes use of the SparkFun Toolkit, and Doxygen generated documentation that is published via GitHub Pages.

<!-- 
 Update these links and URLs for the badges to work correctly
 -->

![GitHub License](https://img.shields.io/github/license/sparkfun/SparkFun_Arduino_Library_HowTo)
![Release](https://img.shields.io/github/v/release/sparkfun/SparkFun_Arduino_Library_HowTo)
![Release Date](https://img.shields.io/github/release-date/sparkfun/SparkFun_Arduino_Library_HowTo)
![Documentation - build](https://img.shields.io/github/actions/workflow/status/sparkfun/SparkFun_Arduino_Library_HowTo/build-deploy-ghpages.yml?label=doc%20build)
[![Compile Test](https://github.com/sparkfun/SparkFun_Arduino_Library_HowTo/actions/workflows/cross-compilation.yml/badge.svg)](https://github.com/sparkfun/SparkFun_Arduino_Library_HowTo/actions/workflows/cross-compilation.yml)
![GitHub issues](https://img.shields.io/github/issues/sparkfun/SparkFun_Arduino_Library_HowTo)

**NOTE:**

Details on how to setup a SparkFun Arduino Library are contained the how to sections further down in this file. This sections contains step-by-step instructions on how to create a SparkFun Arduino Library repository, including how to use the SparkFun Toolkit, and how to setup documentation generation and deployment using GitHub Actions and GitHub Pages.

*Enter a description of the library here*

This library allows you to:

* Build a SparkFun Arduino Library repository - see the howto sections later in this file file for details on creating a repository.
* Implement a GitHub Action that preforms a cross-compile check of the library
* Uses doxygen to generate documentation for the library and publish the results to GitHub Pages


# Repository Contents

* **/examples** - Example sketches for the library (.ino). Run these from the Arduino IDE.
* **/src** - Source files for the library (.cpp, .h).
* **/docs** - configuration files for the documentation.
* **keywords.txt** - Keywords from this library that will be highlighted in the Arduino IDE.
* **library.properties** - General library properties for the Arduino package manager.

# Documentation


 <!-- *Link to documentation for this library here* -->

* **[Library Documentation](https://docs.sparkfun.com/SparkFun_Arduino_Library_HowTo/)** - Arduino Library Documentation for this repository.
* **[Hookup Guide](https://docs.sparkfun.com)** - Hookup guide for the the product associated with this library.
* **[Installing an Arduino Library Guide](https://learn.sparkfun.com/tutorials/installing-an-arduino-library)** - Basic information on how to install an Arduino library.
* **[Hardware GitHub Repository - Qwiic 1x1](TODO)** - Main repository (including hardware files) for product that uses this library. List all products here, on desperate lines.


## Products That Use This Library

 <!-- List the SparkFun products that use this library here -->

* [[TODO: SKU]](https://www.sparkfun.com/) - *Product 1 Name*
* [[TODO: SKU]](https://www.sparkfun.com/) - *Product 2 Name*

## License Information

This product is ***open source***!

This product is licensed using the [MIT Open Source License](https://opensource.org/license/mit)

---

## Setting Up a SparkFun Arduino Library Repo

## Creating a Repository

When creating a repository, the preferred method is to create an empty repository and then copy in desired resources from this *HowTo* repository as needed.


1) Create a new repository on GitHub with the desired name for the library, following the template *SparkFun_<product name>_Arduino_Library*. When creating the repository, select the option to create a README.md file and a MIT License file. This will create the initial files for the repository and set up the license for the repository.
2) Once the repository created, the first step is to create branch - specifically a **develop** branch. This branch is used to stage changes and updates to the library before they are merged into the main branch. All of the initial development is performed on the develop branch, and then a GitHub PR is used to support the initial code review of the repository.
3) Clone the repository to your local machine and switch to the **develop** branch.

> [!NOTE]
> The HowTo repository is not used as a GitHub template to create a new repository due to how GitHub displays an annoying banner on repository created from a template. 

## License

SparkFun Arduino Libraries by default are published using the MIT OpenSource License. To attribute the repository with this license do the following:

### Repository Licensing

- In the root of the repository, include the file ***LICENSE.md*** (or ***LICENSE***, but as .md it renders better on-line)that contains the text of the MIT license
  - When creating the repository, you can specify a license type of MIT and this file is created by GitHub

### README.md

At the bottom of the README.md file, include the following text to indicate the license for the repository:

```
## License Information

This product is ***open source***!

This product is licensed using the [MIT Open Source License](https://opensource.org/license/mit)
```

### Source Code Attribution

For each source file created, include the following text at the comment header at the top of the file:

```cpp
/*
 * @date 2026
 * @copyright Copyright (c) 2026, SparkFun Electronics Inc. This project is released under the MIT License.
 *
 * SPDX-License-Identifier: MIT
 */

```

Change the date and copyright date value as needed.


## Splash Images

To brand the repository for a library, a "splash" image is created and is the first element of the README.md file. 

The Splash Image for this repository:

![SparkFun How To Arduino Library](docs/images/gh-banner-howto-demo.png  "SparkFun HowTo Arduino Library")


The image uses one of the template image files contained in the [docs/images](docs/images) folder. To create a specific image, perform the following steps.

1) Select the image template to use from HowTo - make a local copy of this file
2) Open this file in your desired image editing tool (i.e. Photoshop, Pixelmator, GIMP ...etc).
3) Add the name of the repository item on the left section of the image.
4) Add an image of the target product as well as a tile for the board in the white area of the image
5) Save the image and add it to the "docs/images" folder of the new repository.
6) Set this image name in the linked image at the top of your repo README.md file

### Social Image

Additionally, upload the image as the social image for the new repository. To do this, perform the following:

- Navigate to the Settings page for the new repository
- In the **General** Section, under the section **Social preview** select the ***EditUpload*** button and the presented upload file entry.
- Select the local copy of the Splash Image created for the repository

The file is uploaded and available for the repo.

> [!NOTE]
> The social image is used to create preview tiles on the SparkFun Documentation landing page located at docs.sparkfun.com

## README.md

The README.md file is the main landing page for the repository and should include the following sections:

- Splash Image
- Repository Description
- Badges (i.e. license, release version, documentation build status ...etc)
- Library Description
- Repository Contents
- Documentation
- Products That Use This Library
- License Information

## Documentation

SparkFun publishes product documentation using GitHub Pages. For product getting started and overview guides, Docusaurus is used. For Code libraries - like this Arduino Library HowTo - the doxygen system is used. 

### Comments

The first step is adding doxygen comments to the source code files. This is done by adding special comment blocks to the source code files that are then parsed by doxygen to generate the documentation. See doxygen for specific details, or just use your favorite AI to add doxygen enable comments to the library code. 

### Enabling Doxygen Documentation Generation 

First copy all the contents of the ./docs directory of this repository to the new repository. This includes the doxygen configuration file, HTML custom additions and a custom css (*doxygen-awesome*).

On a unix/macos system this can be done with the following command:

```bash
cp -R ./docs /path/to/new/repository
```

### Doxygen Configuration File Updates

Next, the doxygen configuration file needs to be updated to reflect the new repository. Open the file ***Doxyfile***, which is located in the ***docs/doxygen*** folder and called **doxygen-config***. All updates that are made involve setting the name of this repository and and the name of the library. The following fields need to be updated:

- PROJECT_NAME
- PROJECT_BRIEF

That's it.

### Updating doxygen-awesome-css

The doxygen-awesome-css is a custom CSS sub-repository is used to style the generated documentation. This file is located in the ***docs/doxygen*** folder and is called **doxygen-awesome.css**. To enable proper operation, the current repository is removed and re-linked into this repo. This is done by performing the following steps:

- Navigate to the ***docs/doxygen*** folder in a terminal
- Remove the current doxygen-awesome-css folder by running the following command:
```bash
rm -rf doxygen-awesome-css
```
- Link the doxygen-awesome-css repository into this folder by running the following command:
```bash
git submodule add https://github.com/jothepro/doxygen-awesome-css.git
cd doxygen-awesome-css
git checkout v2.4.2
```
- Commit the changes to the repository and push to GitHub

Note - for more details concerning doxygen-awesome-css, see the official repository located at https://github.com/jothepro/doxygen-awesome-css

### Updating the Custom HTML Additions

In the folder ***docs/doxygen/doxygen-custom***, the ***header.html*** file is used to add a link to the generated documentation page header. This *fancy* link points to the github repository for the library.

To update the link and title, the file must be edited, replacing all "SparkFun" entries and links, with titles and links for the new library.

### Building and Publishing the Documentation

#### Setup

The first step is to enable GitHub Pages support on the new repository. This is done on the ***Settings > Pages*** section of the new repository. The following is done:

- Set Build Source to ***GitHub Actions***
- Check the box for ***Enforce HTTPS***

#### Building the Documentation

The documentation is built using the GitHub Action located in the ***.github/workflows/build-deploy-ghpages.yml*** file. To enable this action, the following steps are performed:

- Copy this workflow from this How To repository to the new repository
- If desired to build automatically after a check in, un-comment the push event trigger for the workflow.

