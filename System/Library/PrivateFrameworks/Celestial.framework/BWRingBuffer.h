/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface BWRingBuffer : NSObject <NSFastEnumeration> {

	void* _ringBuffer;
	int _outputIndex;
	int _inputIndex;
	int _length;
	unsigned long long _typeSize;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BW33*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(int)count;
-(void)incrementRingIndex:(int*)arg1 ;
-(void)incrementRingIndex:(int*)arg1 withCount:(int)arg2 ;
-(int)lastElementIndex;
-(int)firstElementIndex;
-(int)lastElementIndexPlusOne;
-(id)initWithLength:(int)arg1 dataTypeSize:(unsigned long long)arg2 ;
-(void)appendElement:(void*)arg1 ;
-(void)removeFirstElements:(int)arg1 ;
-(void*)firstElement;
-(void*)lastElement;
-(void*)elementAtIndex:(int)arg1 ;
@end

