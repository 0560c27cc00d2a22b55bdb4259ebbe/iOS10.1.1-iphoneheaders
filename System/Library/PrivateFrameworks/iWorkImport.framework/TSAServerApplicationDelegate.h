/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSABaseApplicationDelegate;

@interface TSAServerApplicationDelegate : NSObject {

	TSABaseApplicationDelegate* _baseApplicationDelegate;

}

@property (nonatomic,retain) TSABaseApplicationDelegate * baseApplicationDelegate;              //@synthesize baseApplicationDelegate=_baseApplicationDelegate - In the implementation block
+(id)sharedDelegate;
-(void)setBaseApplicationDelegate:(TSABaseApplicationDelegate *)arg1 ;
-(id)initWithBaseApplicationDelegate:(id)arg1 ;
-(TSABaseApplicationDelegate *)baseApplicationDelegate;
-(id)init;
-(void)dealloc;
@end
