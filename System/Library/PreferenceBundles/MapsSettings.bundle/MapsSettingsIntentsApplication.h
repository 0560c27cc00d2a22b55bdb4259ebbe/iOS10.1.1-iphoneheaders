/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/MapsSettings.bundle/MapsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage, NSMutableArray;

@interface MapsSettingsIntentsApplication : NSObject {

	BOOL _enabled;
	NSString* _displayName;
	NSString* _identifier;
	UIImage* _displayImage;
	NSMutableArray* _extensions;

}

@property (nonatomic,retain) NSMutableArray * extensions;                //@synthesize extensions=_extensions - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) UIImage * displayImage;                   //@synthesize displayImage=_displayImage - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(id)applicationsFromExtensions:(id)arg1 ;
-(NSString *)identifier;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(NSString *)displayName;
-(UIImage *)displayImage;
-(void)addExtension:(id)arg1 ;
-(NSMutableArray *)extensions;
-(void)setExtensions:(NSMutableArray *)arg1 ;
-(id)initWithExtension:(id)arg1 ;
@end

