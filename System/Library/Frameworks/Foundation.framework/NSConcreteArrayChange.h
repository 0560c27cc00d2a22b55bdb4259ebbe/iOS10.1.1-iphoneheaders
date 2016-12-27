/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSArrayChange.h>

@interface NSConcreteArrayChange : NSArrayChange {

	unsigned long long _changeType;
	unsigned long long _sourceIndex;
	unsigned long long _destinationIndex;
	id _value;

}
-(id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4 ;
-(unsigned long long)sourceIndex;
-(unsigned long long)destinationIndex;
-(void)dealloc;
-(id)value;
-(unsigned long long)changeType;
@end

