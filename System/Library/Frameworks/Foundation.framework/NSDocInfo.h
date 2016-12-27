/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSDocInfo : NSObject <NSCopying> {

	long long time;
	unsigned short mode;
	struct {
		unsigned isDir : 1;
		unsigned isSingleFile : 1;
		unsigned isSoftLink : 1;
		unsigned _pad : 13;
	}  flags;

}
-(id)initWithFileAttributes:(id)arg1 ;
-(id)initFromInfo:(stat*)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

