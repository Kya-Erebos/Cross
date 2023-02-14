
char * datatypes[] = {"int", "char", "float", "bool", "str", "class", "func"};
char * dataModsPreffix[] = {"static", "*", "public", "private"}
char * dataModsSuffix[] = {}
/*
rules for data and function declaration:

<Data Declare> = *dataModsPrefix:datatype:*DataModsSuffix
*/

char * FuncMods[] = {"implements"}
char * DatDeclareStr[] = {"="}
/*
rules for data initiation:

funcmods:
    <FuncMods> = *(Funcmod <arg>)
declaration:
    if (datatype != "func") {
        <Data Declare> = data(datatype)
    } else {
        <FuncDeclare> = <Data Declare>(args) <FuncMods>? {<func>}
    }
*/
