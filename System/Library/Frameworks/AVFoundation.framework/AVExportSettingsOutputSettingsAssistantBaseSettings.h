/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVOutputSettingsAssistantBaseSettingsProvider.h>

@class NSDictionary, NSString;

@interface AVExportSettingsOutputSettingsAssistantBaseSettings : NSObject <AVOutputSettingsAssistantBaseSettingsProvider> {

	NSDictionary* _exportSettings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * baseAudioSettings; 
@property (nonatomic,readonly) NSDictionary * baseVideoSettings; 
-(id)init;
-(void)dealloc;
-(NSDictionary *)baseAudioSettings;
-(NSDictionary *)baseVideoSettings;
-(id)initWithOutputSettingsPreset:(id)arg1 ;
@end

