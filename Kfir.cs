using System;

public class Phone
{
    public string callnumber = "0000-000-000";
    public bool phoneOn = false;

    public Phone Phone(int value)
    {
        callnumber = value;
    }

    public void Power()
    {
        if ( phoneOn )
        {
            phoneOn = false;
        }
        else
        {
            phoneOn = true;
        }
    }
}



