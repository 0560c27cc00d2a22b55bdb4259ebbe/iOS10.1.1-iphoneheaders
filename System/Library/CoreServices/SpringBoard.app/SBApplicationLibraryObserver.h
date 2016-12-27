/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/FBApplicationLibraryObserver.h>

@class FBApplicationLibrary, NSMutableDictionary, NSHashTable, NSArray, NSString;

@interface SBApplicationLibraryObserver : NSObject <FBApplicationLibraryObserver> {

	FBApplicationLibrary* _appLibrary;
	NSMutableDictionary* _placeholdersByBundleID;
	NSHashTable* _applicationObservers;
	NSHashTable* _placeholderObservers;

}

@property (nonatomic,readonly) FBApplicationLibrary * appLibrary;              //@synthesize appLibrary=_appLibrary - In the implementation block
@property (nonatomic,copy,readonly) NSArray * placeholders; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)notePlaceholderCancelled:(id)arg1 ;
-(void)addApplicationLifecycleObserver:(id)arg1 ;
-(void)_addObserver:(id)arg1 table:(id)arg2 ;
-(void)_removeObserver:(id)arg1 table:(id)arg2 ;
-(void)removeApplicationLifecycleObserver:(id)arg1 ;
-(void)addPlaceholderLifecycleObserver:(id)arg1 ;
-(void)removePlaceholderLifecycleObserver:(id)arg1 ;
-(id)init;
-(void)applicationLibrary:(id)arg1 didAddPlaceholders:(id)arg2 ;
-(void)applicationLibrary:(id)arg1 didCancelPlaceholders:(id)arg2 ;
-(void)applicationLibrary:(id)arg1 didAddApplications:(id)arg2 ;
-(void)applicationLibrary:(id)arg1 didReplaceApplications:(id)arg2 withApplications:(id)arg3 ;
-(void)applicationLibrary:(id)arg1 didRemoveApplications:(id)arg2 ;
-(void)applicationLibrary:(id)arg1 didDemoteApplications:(id)arg2 ;
-(void)applicationLibrary:(id)arg1 networkUsageDidChange:(BOOL)arg2 ;
-(FBApplicationLibrary *)appLibrary;
-(NSArray *)placeholders;
@end

