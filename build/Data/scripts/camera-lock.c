void main()
{
    void p1 = getplayerproperty(0, "entity");
    float camx = openborvariant("xpos");

    // Initialize saved camera X once.
    if(getglobalvar("saved_camx") == NULL())
    {
        setglobalvar("saved_camx", camx);
    }

    if(p1 && getentityproperty(p1, "exists"))
    {
        int anim = getentityproperty(p1, "animationid");

        if(anim == openborconstant("ANI_ATTACK1"))
        {
            changeopenborvariant("xpos", getglobalvar("saved_camx"));
        }
        else
        {
            setglobalvar("saved_camx", camx);
        }
    }
}