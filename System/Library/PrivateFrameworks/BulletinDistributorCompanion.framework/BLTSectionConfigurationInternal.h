/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface BLTSectionConfigurationInternal : NSObject {

	NSDictionary* _configurations;

}
-(id)init;
-(id)_loadConfigurations;
-(BOOL)hasSectionIDOptedOutOfCoordination:(id)arg1 subtype:(long long)arg2 ;
-(BOOL)hasSectionIDOptedOutOfAttachmentCoordination:(id)arg1 ;
-(BOOL)shouldSectionIDSettingsAlwaysSync:(id)arg1 ;
@end

