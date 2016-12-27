/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray;

@interface OKProducerPreset : NSObject {

	NSString* _family;
	NSString* _name;
	NSDictionary* _presetDictionary;
	NSString* _localizedName;
	NSArray* _guidelines;
	NSArray* _audioURLs;

}
-(id)init;
-(id)backgroundColor;
-(void)dealloc;
-(BOOL)isLocal;
-(id)localizedName;
-(id)uniqueIdentifier;
-(BOOL)isDefault;
-(BOOL)isAvailable;
-(id)guidelines;
-(BOOL)supportsSettingType:(unsigned long long)arg1 ;
-(id)audioURLs;
-(id)pluginIdentifier;
-(id)initWithFamily:(id)arg1 name:(id)arg2 andDictionary:(id)arg3 ;
-(id)initWithFamily:(id)arg1 andPluginIdentifier:(id)arg2 ;
-(id)_settingKeyForType:(unsigned long long)arg1 ;
-(id)family;
@end

