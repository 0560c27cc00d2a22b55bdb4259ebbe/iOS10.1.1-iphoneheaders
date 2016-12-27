/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/BulletinBoardPlugins/CMASBBPlugin.bundle/CMASBBPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBDataProvider.h>

@class NSMutableArray, NSArray, BBSectionParameters, BBSectionInfo, NSString;

@interface CMASBBPlugin : NSObject <BBDataProvider> {

	NSMutableArray* _alerts;
	NSArray* _sortDescriptors;
	BBSectionParameters* _sectionParameters;
	BBSectionInfo* _sectionInfo;
	NSString* _sectionIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)sortDescriptors;
-(id)_placeholderVibe;
-(id)_createBulletinFromDictionary:(id)arg1 ;
-(BOOL)_saveBulletins;
-(id)_priorAlertsDirectory;
-(id)_priorAlertsURL;
-(void)_populatePriorBulletins;
-(void)_cellBroadcastMessageReceived:(id)arg1 ;
-(id)sectionIdentifier;
-(id)defaultSectionInfo;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(id)universalSectionIdentifier;
-(id)sectionDisplayName;
@end

