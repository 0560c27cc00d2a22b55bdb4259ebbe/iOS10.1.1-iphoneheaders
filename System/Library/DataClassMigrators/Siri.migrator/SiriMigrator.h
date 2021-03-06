/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/Siri.migrator/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface SiriMigrator : DataClassMigrator
-(void)_performAudioFeedbackMigration;
-(void)_performATVDictationMigration;
-(void)_cleanupiOS9PhotoAlbumData;
-(void)_performDictationMigration;
-(void)_performSessionLanguageMigration;
-(void)_performBootstrapSpeechIdMigration;
-(void)_cleanupBundleCaches;
-(void)_performOutputVoiceMigration;
-(void)_removeTokenDomain;
-(void)_performLoggingMigration;
-(void)_performInteralToBackedUpMigration;
-(void)_performVoiceServicesLanguageMigration;
-(float)migrationProgress;
-(float)estimatedDuration;
-(id)dataClassName;
-(BOOL)performMigration;
@end

