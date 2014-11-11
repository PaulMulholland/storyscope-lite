# storyscope-lite

Storyscope-Lite is software to help you create and share stories. It is based on the Drupal 7 framework and requires a working Apache / PHP / MySQL stack (see below).

###User Guide
The user guide is here.
[https://github.com/PaulMulholland/storyscope-lite/wiki/Guide-to-Storyscope-Lite]

The User Guide is here.

###Quick Install (OS X)

- Install a MAMP stack - see [http://www.mamp.info/en/]  
    - we recommend the excellent value MAMP PRO.  

- Clone this repository into the MAMP ```/htdocs``` directory.  
    e.g. ```cd /Applications/MAMP/htdocs```  
    ```git clone git@github.com:PaulMulholland/storyscope-lite.git```  
    This will clone this repository into a default directory called  ```storyscope-lite```  
- Start your MAMP stack.    
- Create the ```storyscope_lite``` database in MySQL and set up the database user with all  
  privileges e.g.  
    ```mysql
    CREATE DATABASE storyscope_lite;
    GRANT ALL ON storyscope_lite.* TO 'make-up-a-user'@'localhost' IDENTIFIED BY 'make-up-a-password';
    ```  
    [There's a GUI to do this in MAMP - usually at http://localhost:8888/MAMP/ ]
- Open the MAMP interface and add the ```drupal7``` sub-directory as a MAMP host - see MAMP documentation  
  [http://www.mamp.info/en/documentation/]
- Navigate to the new host's homepage e.g. ```http://storyscope-lite.loc:8888/```  
  Here you should see an install page which asks you to give the name, username and password you set earlier for the ```storyscope_lite``` MySQL database.
- Use the default settings and continue to the next screen where you should pick the ```Storyscope```  
  install profile.
- Wait for the the software to install (~3 minutes, depending on your environment) and then choose an administrative  
  username and password (used to login and configure Storyscope).
- You should then see a link to "Visit your new site."
