#include "Address.h"
#include <regex>

Address::Address()
{
    setAddress();
}

void Address::setAddress()
{
    this->country = checkCountry();
    if (hasState(country))
    {
        this->state = checkState();
    }
    this->city = checkCity();
    this->zip_code = checkZip();
    this->st_address = checkStAddress();
}

string Address::checkCountry()
{
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
    cout << "-----ADDRESS-----" << endl;
    string country;
    cout << "Enter country: ";
    getline(cin, country);

    for (int i = 0; i < country.size(); i++)
    {
        if (i == 0)
            country.at(i) = toupper(country.at(i));
        else if (country.at(i) == ' ')
        {
            i++;
            country.at(i) = toupper(country.at(i));
        }
        else
            country.at(i) = tolower(country.at(i));
    }
    static string countries[] = {"Afghanistan", "Aland Islands", "Albania", "Algeria", "American Samoa", "Andorra", "Angola", "Anguilla", "Antarctica", "Antigua", "Argentina", "Armenia", "Aruba", "Australia", "Austria", "Azerbaijan", "Bahamas", "Bahrain", "Bangladesh", "Barbados", "Barbuda", "Belarus", "Belgium", "Belize", "Benin", "Bermuda", "Bhutan", "Bolivia", "Bosnia", "Botswana", "Bouvet Island", "Brazil", "British Indian Ocean Trty.", "Brunei Darussalam", "Bulgaria", "Burkina Faso", "Burundi", "Caicos Islands", "Cambodia", "Cameroon", "Canada", "Cape Verde", "Cayman Islands", "Central African Republic", "Chad", "Chile", "China", "Christmas Island", "Cocos (Keeling) Islands", "Colombia", "Comoros", "Congo", "Congo, Democratic Republic of the", "Cook Islands", "Costa Rica", "Cote d'Ivoire", "Croatia", "Cuba", "Cyprus", "Czech Republic", "Denmark", "Djibouti", "Dominica", "Dominican Republic", "Ecuador", "Egypt", "El Salvador", "Equatorial Guinea", "Eritrea", "Estonia", "Ethiopia", "Falkland Islands (Malvinas)", "Faroe Islands", "Fiji", "Finland", "France", "French Guiana", "French Polynesia", "French Southern Territories", "Futuna Islands", "Gabon", "Gambia", "Georgia", "Germany", "Ghana", "Gibraltar", "Greece", "Greenland", "Grenada", "Guadeloupe", "Guam", "Guatemala", "Guernsey", "Guinea", "Guinea-Bissau", "Guyana", "Haiti", "Heard", "Herzegovina", "Holy See", "Honduras", "Hong Kong", "Hungary", "Iceland", "India", "Indonesia", "Iran (Islamic Republic of)", "Iraq", "Ireland", "Isle of Man", "Israel", "Italy", "Jamaica", "Jan Mayen Islands", "Japan", "Jersey", "Jordan", "Kazakhstan", "Kenya", "Kiribati", "Korea", "Korea (Democratic)", "Kuwait", "Kyrgyzstan", "Lao", "Latvia", "Lebanon", "Lesotho", "Liberia", "Libyan Arab Jamahiriya", "Liechtenstein", "Lithuania", "Luxembourg", "Macao", "Macedonia", "Madagascar", "Malawi", "Malaysia", "Maldives", "Mali", "Malta", "Marshall Islands", "Martinique", "Mauritania", "Mauritius", "Mayotte", "McDonald Islands", "Mexico", "Micronesia", "Miquelon", "Moldova", "Monaco", "Mongolia", "Montenegro", "Montserrat", "Morocco", "Mozambique", "Myanmar", "Namibia", "Nauru", "Nepal", "Netherlands", "Netherlands Antilles", "Nevis", "New Caledonia", "New Zealand", "Nicaragua", "Niger", "Nigeria", "Niue", "Norfolk Island", "Northern Mariana Islands", "Norway", "Oman", "Pakistan", "Palau", "Palestinian Territory, Occupied", "Panama", "Papua New Guinea", "Paraguay", "Peru", "Philippines", "Pitcairn", "Poland", "Portugal", "Principe", "Puerto Rico", "Qatar", "Reunion", "Romania", "Russian Federation", "Rwanda", "Saint Barthelemy", "Saint Helena", "Saint Kitts", "Saint Lucia", "Saint Martin (French part)", "Saint Pierre", "Saint Vincent", "Samoa", "San Marino", "Sao Tome", "Saudi Arabia", "Senegal", "Serbia", "Seychelles", "Sierra Leone", "Singapore", "Slovakia", "Slovenia", "Solomon Islands", "Somalia", "South Africa", "South Georgia", "South Sandwich Islands", "Spain", "Sri Lanka", "Syria", "Sudan", "Suriname", "Svalbard", "Swaziland", "Sweden", "Switzerland", "Syrian Arab Republic", "Taiwan", "Tajikistan", "Tanzania", "Thailand", "The Grenadines", "Timor-Leste", "Tobago", "Togo", "Tokelau", "Tonga", "Trinidad", "Tunisia", "Turkey", "Turkmenistan", "Turks Islands", "Tuvalu", "Uganda", "Ukraine", "United Arab Emirates", "United Kingdom", "United States", "Uruguay", "US Minor Outlying Islands", "Uzbekistan", "Vanuatu", "Vatican City State", "Venezuela", "Vietnam", "Virgin Islands (British)", "Virgin Islands (US)", "Wallis", "Western Sahara", "Yemen", "Zambia", "Zimbabwe"};

    static vector<string> vCountries(countries, countries + sizeof(countries) / sizeof(countries[0]));
    auto it = find(vCountries.begin(), vCountries.end(), country);
    if (it != vCountries.end())
    {
        return country;
    }
    else
    {
        cout << "Error: Enter a valid country name" << endl;
        return checkCountry();
    }
}

string Address::checkState()
{
    //cin.ignore(numeric_limits<std::streamsize>::max(),'\n');
    static string states[] = {"Alaska",
                              "Alabama",
                              "Arkansas",
                              "American Samoa",
                              "Arizona",
                              "California",
                              "Colorado",
                              "Connecticut",
                              "District of Columbia",
                              "Delaware",
                              "Florida",
                              "Georgia",
                              "Guam",
                              "Hawaii",
                              "Iowa",
                              "Idaho",
                              "Illinois",
                              "Indiana",
                              "Kansas",
                              "Kentucky",
                              "Louisiana",
                              "Massachusetts",
                              "Maryland",
                              "Maine",
                              "Michigan",
                              "Minnesota",
                              "Missouri",
                              "Mississippi",
                              "Montana",
                              "North Carolina",
                              " North Dakota",
                              "Nebraska",
                              "New Hampshire",
                              "New Jersey",
                              "New Mexico",
                              "Nevada",
                              "New York",
                              "Ohio",
                              "Oklahoma",
                              "Oregon",
                              "Pennsylvania",
                              "Puerto Rico",
                              "Rhode Island",
                              "South Carolina",
                              "South Dakota",
                              "Tennessee",
                              "Texas",
                              "Utah",
                              "Virginia",
                              "Virgin Islands",
                              "Vermont",
                              "Washington",
                              "Wisconsin",
                              "West Virginia",
                              "Wyoming"};

    cout << "Enter state: ";
    string state;
    getline(cin, state);
    static vector<string> vStates(states, states + sizeof(states) / sizeof(states[0]));
    auto it = find(vStates.begin(), vStates.end(), state);
    if (it != vStates.end())
    {
        return state;
    }
    else
    {
        cout << "Error: Enter a valid state name" << endl;
        return checkState();
    }
}

string Address::checkStAddress()
{
    //cin.ignore(numeric_limits<std::streamsize>::max(),'\n');
    string st;
    cout << "Enter street address: ";
    getline(cin, st);
    return st;
}

string Address::checkZip()
{
    string zip;
    cout << "Enter zipcode: ";
    getline(cin, zip);
    regex reg("\\d{5}");
    sregex_iterator in(zip.begin(), zip.end(), reg);
    sregex_iterator null;
    if (in == null)
    {
        cout << "Invalid zip code!" << endl;
        return checkZip();
    }
    return zip;
}

string Address::checkCity()
{
    string city;
    cout << "Enter city: ";
    getline(cin, city);
    return city;
}

void Address::toString()
{
    cout << "Home address: " << endl
         << st_address << endl
         << state << " " << zip_code << endl
         << country;
}

bool Address::hasState(string c)
{
    if (c == "United States")
    {
        return true;
    }
    return false;
}
