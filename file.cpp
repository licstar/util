unsigned long get_file_size(const char *filename){
        unsigned long size;
        FILE* fp = fopen( filename, "rb" );
        if(fp == NULL){
                //printf("ERROR: Open file %s failed.\n", filename);
                return 0;
        }
        fseek( fp, SEEK_SET, SEEK_END );
        size=ftell(fp);
        fclose(fp);
        return size;
}
