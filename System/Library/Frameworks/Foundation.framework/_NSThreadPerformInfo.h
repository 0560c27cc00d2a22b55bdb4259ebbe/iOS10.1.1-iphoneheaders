/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSCondition;

@interface _NSThreadPerformInfo : NSObject {

	id target;
	SEL selector;
	id argument;
	NSMutableArray* modes;
	NSCondition* waiter;
	char* signalled;

}
-(void)dealloc;
@end

