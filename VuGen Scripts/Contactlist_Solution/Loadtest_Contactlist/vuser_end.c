vuser_end()
{

	/* Click on Logout Button */

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(26);

	web_url("logout", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("logout_2", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/users/logout", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/logout", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("thinking-tester-contact-list.herokuapp.com_2", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/", 
		"Resource=0", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/logout", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}