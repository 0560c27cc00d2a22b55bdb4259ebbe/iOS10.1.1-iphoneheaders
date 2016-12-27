/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableData.h>

@interface NSConcreteMutableData : NSMutableData {

	unsigned _reserved : 1;
	unsigned _needToZero : 1;
	unsigned _hasVM : 1;
	unsigned _retainCount : 29;
	unsigned long long _length;
	unsigned long long _capacity;
	void* _bytes;

}
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(void)resetBytesInRange:(NSRange)arg1 ;
-(void)_freeBytes;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(const void*)bytes;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)setLength:(unsigned long long)arg1 ;
-(void)appendData:(id)arg1 ;
-(void*)mutableBytes;
-(id)initWithLength:(unsigned long long)arg1 ;
-(void)increaseLengthBy:(unsigned long long)arg1 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 ;
@end

