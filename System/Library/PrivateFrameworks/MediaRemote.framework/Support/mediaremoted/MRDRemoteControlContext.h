/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSArray;

@interface MRDRemoteControlContext : NSObject {

	NSMutableArray* _routedCommands;
	NSString* _contextID;
	NSString* _originatingAppDisplayID;

}

@property (nonatomic,readonly) NSString * contextID;                            //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,readonly) NSString * originatingAppDisplayID;              //@synthesize originatingAppDisplayID=_originatingAppDisplayID - In the implementation block
@property (nonatomic,readonly) NSArray * routedCommands; 
-(NSString *)originatingAppDisplayID;
-(void)addRoutedCommand:(id)arg1 ;
-(id)initWithContextID:(id)arg1 originatingAppDisplayID:(id)arg2 ;
-(NSArray *)routedCommands;
-(void)clearRoutedCommands;
-(void)dealloc;
-(NSString *)contextID;
@end

