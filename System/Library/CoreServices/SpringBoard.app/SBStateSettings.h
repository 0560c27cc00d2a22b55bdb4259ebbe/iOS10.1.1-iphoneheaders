/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <SpringBoard/SBStateSettings.h>

@protocol SBStateSettings <NSObject>
@required
-(void)clearStateSettings;
-(BOOL)boolForStateSetting:(unsigned)arg1;
-(void)setFlag:(long long)arg1 forStateSetting:(unsigned)arg2;
-(void)applyStateSettings:(id)arg1;
-(long long)flagForStateSetting:(unsigned)arg1;
-(void)setObject:(id)arg1 forStateSetting:(unsigned)arg2;
-(id)objectForStateSetting:(unsigned)arg1;
-(id)copyStateSettings;

@end

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSMutableSettings, NSString;

@interface SBStateSettings : NSObject <BSSettingDescriptionProvider, SBStateSettings, NSCopying, BSDescriptionProviding> {

	BSMutableSettings* _settings;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearStateSettings;
-(BOOL)boolForStateSetting:(unsigned)arg1 ;
-(void)setFlag:(long long)arg1 forStateSetting:(unsigned)arg2 ;
-(void)applyStateSettings:(id)arg1 ;
-(long long)flagForStateSetting:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forStateSetting:(unsigned)arg2 ;
-(id)objectForStateSetting:(unsigned)arg1 ;
-(id)copyStateSettings;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

