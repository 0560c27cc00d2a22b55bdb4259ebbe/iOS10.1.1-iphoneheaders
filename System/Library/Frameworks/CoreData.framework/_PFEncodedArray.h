/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSArray.h>

@class NSData;

@interface _PFEncodedArray : NSArray {

	NSData* _sourceData;
	int _cd_rc;
	unsigned _count;

}
-(Class)classForArchiver;
-(void)_replaceObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)description;
-(id)copy;
-(id)mutableCopy;
-(Class)classForCoder;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(const id*)_values;
@end

