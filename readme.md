# TCCOE 2022 HAMR Tutorial

## TCCOE 2022 Development Environment Setup

### Prerequisites

An OVA (Open Virtual Appliance) has been created that has all the development tools<sup>*</sup> that will be used in this tutorial preinstalled. You will need a virtualization provider that is capable of importing the OVA such as VMWare or VirtualBox.  We recommend using VirtualBox as it is free/open-source and can be downloaded via 

[https://www.virtualbox.org/wiki/Downloads](https://www.virtualbox.org/wiki/Downloads)

&ast; CLion, a C/C++ IDE, is used during the demo and does requires a license. If you don't have one then a 30 day free-trial license can be obtained via the following:

1.  Launch CLion from within the virtual machine
2.  A ``Licenses`` dialog box will be displayed.  Click the ``Start trial`` radio button and then click ``Log In to JetBrains Account``.
3.  Login to your existing JetBrains account or, if you don't have an account then do the following:
    1. Create a new account
    2. An email will be sent that has the link ``Confirm your account``
    3. Click through and complete the online account setup.
4. Once the account is setup, return to CLion and click ``Start Trial`` and then ``Close``

### Import the OVA

1. Download the 6.7GB OVA [here](https://drive.google.com/file/d/1IZjiec3aEesARvWXAKccGbI2P0CUsVRk/view?usp=sharing).
1. In VirtualBox choose ``File >> Import Appliance``
1. Point to the location of the downloaded ``tccoe22.ova`` file in the dialog box that opens and click ``Continue``.
1. Review the appliance settings in the next dialog box and choose ``Import``.  This may take a couple of minutes to complete.

### Launch the Virtual Machine

1. Launch the installed ``debian-11.1-desktop-tccoe22`` virtual machine
2. The username and password for the virtual machine are both ``vagrant``.  Enter these into the login dialog box 


## Tutorial Material

This material has been copied into the virtual machine and is available under ``/home/vagrant/tccoe22``.  It contains the following material:

1. Directory containing an AADL model of a temperature control system that will be used to generate code via HAMR
 
   [temperature_control](temperature_control)
   
1. Directory containing containing the completed project in which code has been generated, behavior code has been 
   added and the results have been tested under Linux and CAmkES/seL4 (via QEMU)
   
   [temperature_control_FINAL](temperature_control_FINAL)

## References

1. [HAMR Website](https://hamr.sireum.org/)
