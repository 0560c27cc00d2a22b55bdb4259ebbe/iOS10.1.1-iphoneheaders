/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCharacterSet.h>

@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet {

	NSCharacterSet* _original;
	NSCharacterSet* _invertedSet;
	struct {
		unsigned _inverted : 1;
		unsigned _builtin : 1;
		unsigned _isCF : 1;
		unsigned _reserved : 29;
	}  _flags;

}
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)bitmapRepresentation;
-(id)initWithSet:(id)arg1 options:(unsigned long long)arg2 ;
-(CFCharacterSetRef)_expandedCFCharacterSet;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(void)_expandInverted;
-(id)replacementObjectForKeyedArchiver:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(BOOL)isEmpty;
-(BOOL)_isDeallocating;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)_tryRetain;
-(id)invertedSet;
@end

