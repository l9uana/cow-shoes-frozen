#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        char input[100];
        fgets(input, 100, stdin);
        if (strcmp(input, "깃헙이 장난이냐?\n") == 0) {
            NSLog(@"네");
        }
    }
    return 0;
}