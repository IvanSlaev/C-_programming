#include <iostream>


#ifndef _FILE_SHARE_HPP
#define _FILE_SHARE_HPP

namespace sharing_file {

	using namespace std;

	class file_sharing_class_1;
	class file_sharing_class_2;

	class file_sharing_class_1 {
	private:
		int flag;
	public:
		void open_file(void);
		void close_file(void);
		friend int is_the_file_in_use(file_sharing_class_1, file_sharing_class_2);
	};

    class file_sharing_class_2 {
    private:
        int flag;
    public:
        void open_file(void);
        void close_file(void);
        friend int is_the_file_in_use(file_sharing_class_1, file_sharing_class_2);
    };
}

#endif /* _FILE_SHARE_HPP */
