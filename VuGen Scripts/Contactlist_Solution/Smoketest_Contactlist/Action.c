Action()
{
	/* Enter login credentials */

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(57);

	
	// Co-relation 
	web_reg_save_param_ex(
		"ParamName=tokenParameter",
		"LB=\"token\":\"",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=BODY",
		"IgnoreRedirections=Yes",
		LAST);

	
	web_custom_request("login", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/users/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"email\":\"brunda987@gmail.com\",\"password\":\"Brunda@987\"}", 
		LAST);

	
	//Text Check
	/* Contact List Heading Check */
	
	web_reg_find("Text=Contact List", 
		LAST);

	web_url("contactList", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
	return 0;
}
