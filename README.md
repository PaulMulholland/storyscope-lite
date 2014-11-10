# storyscope-lite

Storyscope-Lite is software to help you create and share stories. It is based on the Drupal 7 framework and requires a working Apache / PHP / MySQL stack (see below).

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


# Guide to Storyscope Lite

A Storyscope site is made up of a set of dossiers.

![][1]

Each dossier has a title, text, cover image and a set of stories.

![][2]

Each story has a title, text and a gallery of images that have been added to it.

![][3]

When you edit a story, as well as modifying the title and text you can add media and also add tags to the story. The tags use the "auto suggest" facility so that you can start typing and then choose a suggested tag.

![][4]

When viewing a story, you see two areas immediately below the story called Story Tags and Suggested Tags. The Story Tags are the ones that have been added when editing the story. The Suggested Tags come from an analysis of the text of the story.

![][5]

If you click on one of the tags (e.g. Claude Monet) then below you see more information about that tag. If you click on Show All then you see information from all story tags combined.

Having clicked on one of the story tags, then below the story you first see some basic information about the tag such as a text description, image, and facts about the tag (e.g. date of birth of a person, or materials used to make an artwork). The amount of information shown can vary depending on what can be retrieved about the tag (e.g. whether a picture and piece of text can be found, and what facts can be retrieved).

![][6]

At the very bottom of the page is an event space of all the activities that can be found that are related to the tag. For an artist, they could include, for example, artworks created, education history and places lived. The text box near the Event Space title can be used to filter the set of the events. The events can be sorted by clicking on the column headings.

![][7]

Above the event space is an option to display the events on a timeline. A timeline can be created for all events or just events of a particular activity. Only events with start and/or end dates are included on the timeline.

![][8]

You can move forward and backward through the timeline. The arrow near the magnifying glass on the left hand side takes you back to the first page of the timeline.

![][9]

Clicking on the title (e.g. Claude Monet) on the first page of the timeline takes you back to the previous information page.

![][10]

Above the timeline links are links to key themes and settings related to the tag. The themes are derived from facts, event agents and event tags that do the most to interconnect the information about the selected topic. For example, if the topic was an artist and many of the artist's works had the same subject or genre then this would be an important theme. The settings are key event times and event locations that bind together what is known about the tag. For example, if the artist created a number of works at a certain time and place then this would be a key setting.

![][11]

If you click on any link such as a setting or theme (e.g. Water Lilies) then you see information about it organised in the same way. The story you were originally looking at is still located at the top of the screen. If the topic you are looking at is not one of the tags of your story, then an "Add to Story" button appears on the right. This allows you to add this as a Story Tag. You may do this to indicate that the topic is already mentioned in the story or as a reminder to add something about this topic to your story.

![][12]

If you go back to the Dossier level then you will notice that themes and settings are also calculated for the whole dossier. These are the themes and settings that do most to bind together all stories of the dossier. You can click on a theme or setting to find out more about it.

![][13]

If you go back to the home page (e.g. by clicking on the Storyscope logo, top left) then you will notice that themes and settings are also calculated for the whole Storyscope site.

![][14]

You can click on a theme or setting (e.g. Impressionism) to find out more about it.

![][15]

If you click on the magnifying glass next to the "About:" title then you get a set of stories related to that theme. Those stories may not necessarily have Impressionism as a story tag, but will have some connection to Impressionism.

![][16]

Settings and themes are also calculated for the set of stories returned by a search for e.g. Impressionism.

![][17]

Clicking on one of the stories related to Impressionism takes you to that story within its associated dossier. This story has its own Story Tags and Suggested Tags.

![][18]

[1]: https://lh4.googleusercontent.com/_Paq3IlIMiQZXSpJSsfIbHe1OIQEU2EAZ55my5sCjsg9Pd-UaoOsJE_yljMOnXmFReO8y0rnsyAX0b3yb31CeIy_8YKUpKHbuTll_BxTuPQs9Sn72z0-tDKJvTJhjtruq5lm ""
[2]: https://lh5.googleusercontent.com/qYy3xqQcwa748AbmGEY2a7N95Fx3PeWfzPMwEWq_rcrXqY6_10WMdCwUDKdN8WeID-P7oiqaSfJJqy_9aMBsmvJlgW9M8xyCOBMPtPTWIZot34x8CnmpFRs3uhFOx9QYuS27 ""
[3]: https://lh6.googleusercontent.com/oVaWMGlUvlejC71VQuKkOmukbslxZiObpXSvXi5JibBgdyXbqLSMWmLKHR9zzFNOWaJ3dzgJ_TO0PvuvM83OM6hIyv6iWO06PLKtaod6NFeTpFtAJGtipauxpcp1m4tfWKYY ""
[4]: https://lh3.googleusercontent.com/nvlBoCFZw0rTi3Kw81tSyNIG8HmEFcAbe5RKQQMhEnQaK0scf4lK5ettspnI1BqzG7j-7wgj1Xjs6Dxb5QJlrgvMkAVKyQKbe2AuWo3MYSJ00pV7sAbSfehT6vfMzQfnn5BU ""
[5]: https://lh6.googleusercontent.com/YqvtbZJ_qYM3_phC4P9dD6fzzM9O0pr7jW65wmd_peEfR1lIQcxn_ImMK923ycHN8GdZswIS3ITkbXthawEXrP9yE5UT1rmsZYotpzarv8x4xaJ81XK77P9MuvW3JZyjjyeN ""
[6]: https://lh6.googleusercontent.com/P6b3OdNAVP4jml4lM9E3pRz-N-mbI68dGe4iTfCi9F8si4EAAlUHz7gEnp8yOof2wm-OC74bPqqZegVbUQKsJnUJvS-WC9R9taaTaT1L7od5TdmPV5TpnGeK2cvzKpl9gBPG ""
[7]: https://lh6.googleusercontent.com/tvd0vMgnoiF_UCXQeOnGKwFNFkK8EdWp7AZty27mkrlviyhClKGYTRz136pUg6umChXu5Lp7Sscz90IwLhDXYL4kKCD-VIxoA57PjHZD_IshynLSi0PR-WbX0iDeZQ5mF-RP ""
[8]: https://lh4.googleusercontent.com/wx8X8QkzoqatcHUlND-Oa4ntKJkCwO7ElvYTSTWR5yBmNwAEQEhFh9gTDep-pAOFB8nOfYL2fjAjswnnjJbpUKOY2pEFjY0NnsfmVuHiIlX7fJPCIAoK_R9qMQ6abQQ4lyuM ""
[9]: https://lh3.googleusercontent.com/1YTtY5p-f9NUeqRVkndta1XGimT_ZUp11SqYqVzMqT03EgoDXxBZeDAj1-fDuS7KL3c6yMSdinRCoJ7FpBekO6Xd6Pc_BIdfAN54wSdJByI3qDnqz-XGB2HQcwSGxlRcfvQo ""
[10]: https://lh6.googleusercontent.com/mo0Rboz3xgZeK3WxbHFa65LL50vQjZRoyfWxwVqxD7iUf1Q73X72i4jVW1GyiWMhEvAWycrUAq4_NCyOx5EI22kU23J8feX2NaKQ0F0nNRKRro-Xund3O0qUC5vbaYLq9XJr ""
[11]: https://lh6.googleusercontent.com/tQDG8TleYM9vLHuhkZ9tr84zVa1fvCPPMQYIJIdeWzsfEdZADGaoZPYCBJLYPt3F0mxnRWyvUT2ZgArNjw4wl9tx-aFvRLnNSYikNfkm8MniCe2dX5lUbuS6YQGcv8tO5PsL ""
[12]: https://lh3.googleusercontent.com/k6Z8Zxa3XaUrnrDFeDsrCtvPwLGx2shggaulXJarBe89my2UTXJnYHRedWRC9L8unzeSnJOZh60g5BWGtTKv3KjX0IfF56pr8iKU1lkdcPW38PVA_4hGpxNQPJNM_theAOXt ""
[13]: https://lh6.googleusercontent.com/CP6lx8ntmnJ2_uvqvQ9hspC70Uzrf0akZezjAXt0XZrpUfSnI1nT2Dd514jrqWRwvjfnmDzIiAQnIc9ZYrszGiiAZkMX0p5dSbCdmDEuMaKfApzMOh0zyfPc-DC1lz1XqAC2 ""
[14]: https://lh5.googleusercontent.com/1cHx-_iiG3e3D3Hvm75IxH0hIN227siLKVfM--5klyckSTmYDHtYCfP7ULWesuo0RE5H5ZTajniFqEFZnxfGKsNAgi_yGFgErYoa1C56Vru0zrCfRTD_LYcLMT1EdUivlK1S ""
[15]: https://lh3.googleusercontent.com/khb3tm2G8zyGwlE3JYGvCj7n4bqFW9mToS0TObZvgpgglQgGUbN2dDL0o1XK-XatKWUkL7ZSSY_hYU6POCHdgAkfSniK0DjDdaZBPtUO_RBv5lP6mngDvH_o5mktOCupdupk ""
[16]: https://lh4.googleusercontent.com/hmcLQ_DfXwd8_uGQ6gkh8AQeEPKQ1JktCdYlNHzh-79T9-y_jFM190gaWKFpTNpI269O9p200wJI9XiQWY6uMrFe7B7Ia8DHla85wOxHTZRE3Unn9uQNAEJINAqtUoGATf7w ""
[17]: https://lh4.googleusercontent.com/woUaBC2uQe5lps2tyXcTJyNggTk7d5F3ky9yANN60VWTK5F5So_xM5hKL_tKNpwKjmb4oK8eJdNMxokIvii_0a3Rm9FMYIuI0tYv9RBI-D9hxZy15YPjOQUXBzfZ79yEu_sq ""
[18]: https://lh4.googleusercontent.com/qqVrxHnBcfuVSpchy66tEvZgwqiWLrww_5WMVu57RfnNvr-yGiF8FklBpoxxSerA2whGsHWjhpLJS-QDuTFlifgWPEiBVtSREQtKaf4eNack5zuGwAwcuqMrGkKP3Y8TvO-3 ""
  
