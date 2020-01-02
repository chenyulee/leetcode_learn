

char * defangIPaddr(char * address){
    size_t length = strlen(address);
    char * dip = malloc(sizeof(char)*(6+length+1));
    int i;
    int j = 0;
    for(i = 0; i<length; i++) {
        if(address[i] == '.') {
            dip[j++] = '[';
            dip[j++] = '.';
            dip[j++] = ']';
        }
        else{
            dip[j++]=address[i];
        }
    }
    dip[j] ='\0';
    return dip;

}
