/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface PHALibraryChangeBuffer : NSObject {

	NSMutableDictionary* _assetIdentifierToFlagsMap;
	NSMutableSet* _representedAssetJobScenarios;
	NSMutableArray* _momentChanges;

}

@property (retain) NSMutableDictionary * assetIdentifierToFlagsMap;              //@synthesize assetIdentifierToFlagsMap=_assetIdentifierToFlagsMap - In the implementation block
@property (retain) NSMutableSet * representedAssetJobScenarios;                  //@synthesize representedAssetJobScenarios=_representedAssetJobScenarios - In the implementation block
@property (retain) NSMutableArray * momentChanges;                               //@synthesize momentChanges=_momentChanges - In the implementation block
-(id)init;
-(void)drain;
-(BOOL)hasChanges;
-(void)addMomentChange:(id)arg1 ;
-(NSMutableArray *)momentChanges;
-(NSMutableDictionary *)assetIdentifierToFlagsMap;
-(id)snapshotAndDrain;
-(BOOL)hasAssetChanges;
-(BOOL)hasMomentChanges;
-(id)changedAssetIdentifiers;
-(void)mergeFlags:(int)arg1 forAssetWithIdentifier:(id)arg2 ;
-(void)mergeRepresentedJobScenario:(unsigned long long)arg1 ;
-(NSMutableSet *)representedAssetJobScenarios;
-(BOOL)representsUserForegroundJobScenario;
-(void)setAssetIdentifierToFlagsMap:(NSMutableDictionary *)arg1 ;
-(void)setRepresentedAssetJobScenarios:(NSMutableSet *)arg1 ;
-(void)setMomentChanges:(NSMutableArray *)arg1 ;
@end

