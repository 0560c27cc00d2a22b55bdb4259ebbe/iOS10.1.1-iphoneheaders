/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceSceneUpdateEvent.h>

@class FBSSceneClientSettingsDiff, FBSDisplay, NSString, FBSSceneSpecification;

@interface FBSWorkspaceCreateSceneEvent : FBSWorkspaceSceneUpdateEvent {

	FBSSceneClientSettingsDiff* _clientSettings;
	FBSDisplay* _display;
	NSString* _specificationClassName;

}

@property (nonatomic,retain) FBSSceneClientSettingsDiff * clientSettingsDiff;              //@synthesize clientSettings=_clientSettings - In the implementation block
@property (nonatomic,retain) FBSDisplay * display;                                         //@synthesize display=_display - In the implementation block
@property (nonatomic,retain) FBSSceneSpecification * specification; 
-(void)dealloc;
-(FBSDisplay *)display;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(FBSSceneSpecification *)specification;
-(void)setSpecification:(FBSSceneSpecification *)arg1 ;
-(FBSSceneClientSettingsDiff *)clientSettingsDiff;
-(void)setClientSettingsDiff:(FBSSceneClientSettingsDiff *)arg1 ;
-(void)setDisplay:(FBSDisplay *)arg1 ;
@end

