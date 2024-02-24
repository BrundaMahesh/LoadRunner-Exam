/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	/* Contact List App Heading Check */

	web_reg_find("Text=Contact List App", 
		LAST);

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("thinking-tester-contact-list.herokuapp.com", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	//Image Check
	web_image_check("The Thinking Tester Logo","Src=/img/thinkingTesterLogo.png",LAST);

	return 0;
}
