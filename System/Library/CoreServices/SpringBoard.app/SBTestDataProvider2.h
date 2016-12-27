/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBRemoteDataProvider.h>

@class BBDataProviderConnection, BBDataProviderProxy, NSString;

@interface SBTestDataProvider2 : NSObject <BBRemoteDataProvider> {

	BBDataProviderConnection* _connection;
	BBDataProviderProxy* _proxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)publish;
-(id)init;
-(id)sortDescriptors;
-(id)sectionIdentifier;
-(id)defaultSectionInfo;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 ;
-(float)attachmentAspectRatioForRecordID:(id)arg1 ;
-(void)dataProviderDidLoad;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(void)receiveMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(id)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3 ;
-(id)sectionDisplayName;
@end

