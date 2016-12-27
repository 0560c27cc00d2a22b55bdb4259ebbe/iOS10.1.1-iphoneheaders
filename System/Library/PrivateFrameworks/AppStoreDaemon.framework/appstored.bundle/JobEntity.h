/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>
#import <appstored/DrivableEntity.h>
#import <appstored/Stateful.h>

@class NSString;

@interface JobEntity : SSSQLiteEntity <DrivableEntity, Stateful> {

	NSString* _state;

}

@property (nonatomic,readonly) NSString * state;                    //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)orderedQueryWithDatabase:(id)arg1 predicate:(id)arg2 ;
+(id)joinClauseForProperty:(id)arg1 ;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)arg1 ;
+(id)foreignDatabaseTableForProperty:(id)arg1 ;
+(id)foreignDatabaseColumnForProperty:(id)arg1 ;
+(Class)memoryEntityClass;
+(void)initialize;
+(id)anyInDatabase:(id)arg1 predicate:(id)arg2 ;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
-(BOOL)isAutoUpdate;
-(id)_downloadsQuery;
-(id)copyInstall;
-(long long)addPersistentJobsWithClientID:(id)arg1 ;
-(BOOL)_shouldSuppressDialogForError:(id)arg1 ;
-(id)copyDownloads;
-(void)_notifyIfAllDemotedAppsRestored;
-(BOOL)_findNextInstallableDownloadID:(long long*)arg1 forJobID:(long long)arg2 ;
-(BOOL)_firstDownloadID:(out long long*)arg1 forPredicate:(id)arg2 inDatabase:(id)arg3 ;
-(id)copyCurrentState;
-(id)stateProperty;
-(id)copyDownloadIDs;
-(long long)externalPhase;
-(void)failWithFinalState:(id)arg1 error:(id)arg2 ;
-(void)finishWithFinalState:(id)arg1 ;
-(BOOL)startNextInstall;
-(long long)externalType;
-(BOOL)canPause;
-(NSString *)description;
-(double)percentComplete;
-(NSString *)state;
-(void)setCurrentState:(id)arg1 ;
-(void)transitionToState:(id)arg1 ;
-(BOOL)deleteFromDatabase;
-(id)stateMachine;
@end

