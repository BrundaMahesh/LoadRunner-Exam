Action()
{

	/* Enter login credentials */

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(57);

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

	web_custom_request("contacts", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	/* Contact List Heading Check */

	/* Click on Add a New Contact */

	web_reg_find("Text=Add Contact", 
		LAST);

	lr_think_time(59);

	web_url("addContact", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/addContact", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	/* Add Contact Heading Check */

	lr_think_time(57);

	web_custom_request("contacts_2", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/addContact", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"firstName\":\"Brunda\",\"lastName\":\"M\",\"birthdate\":\"1999-08-06\",\"email\":\"brunda987@gmail.com\",\"phone\":\"9876786578\",\"street1\":\"Mysore\",\"street2\":\"Mysore\",\"city\":\"Mysore\",\"stateProvince\":\"Karnataka\",\"postalCode\":\"570004\",\"country\":\"India\"}", 
		LAST);

	web_url("contactList_2", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Resource=0", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/addContact", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("contacts_3", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	/* Newly add Contact Name check */

	web_reg_find("Text=Contact Details", 
		LAST);

	lr_think_time(35);

	web_url("contactDetails", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contactDetails", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("65d987aac0d7050013a34314", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts/65d987aac0d7050013a34314", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactDetails", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	/* Contact Details heading Check */

	/* Click on Return to Contact List */

	lr_think_time(71);

	web_url("contactList_3", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Resource=0", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactDetails", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
