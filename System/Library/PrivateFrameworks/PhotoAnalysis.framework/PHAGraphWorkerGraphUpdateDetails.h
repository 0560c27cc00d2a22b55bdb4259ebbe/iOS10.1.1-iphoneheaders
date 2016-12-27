/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSArray, PHFetchOptions;

@interface PHAGraphWorkerGraphUpdateDetails : NSObject {

	NSMutableSet* _momentsToAdd;
	NSMutableSet* _momentsToDelete;
	NSMutableSet* _momentsToUpdate;
	NSMutableSet* _momentsToInvalidateOnly;
	NSArray* _momentLibraryChanges;
	PHFetchOptions* _fetchOptions;

}

@property (retain) NSMutableSet * momentsToAdd;                         //@synthesize momentsToAdd=_momentsToAdd - In the implementation block
@property (retain) NSMutableSet * momentsToDelete;                      //@synthesize momentsToDelete=_momentsToDelete - In the implementation block
@property (retain) NSMutableSet * momentsToUpdate;                      //@synthesize momentsToUpdate=_momentsToUpdate - In the implementation block
@property (retain) NSMutableSet * momentsToInvalidateOnly;              //@synthesize momentsToInvalidateOnly=_momentsToInvalidateOnly - In the implementation block
@property (retain) PHFetchOptions * fetchOptions;                       //@synthesize fetchOptions=_fetchOptions - In the implementation block
@property (readonly) BOOL hasMomentsToAdd; 
@property (readonly) BOOL hasMomentsToDelete; 
@property (readonly) BOOL hasMomentsToUpdate; 
@property (readonly) BOOL hasAnyChanges; 
@property (readonly) NSArray * momentLibraryChanges;                    //@synthesize momentLibraryChanges=_momentLibraryChanges - In the implementation block
-(NSMutableSet *)momentsToDelete;
-(void)processMomentLibraryChanges;
-(id)momentIdentiferToFlagsMapForMoments:(id)arg1 assetFlags:(id)arg2 ;
-(BOOL)hasMomentsToAdd;
-(BOOL)hasMomentsToDelete;
-(BOOL)hasMomentsToUpdate;
-(id)initWithMomentLibraryChanges:(id)arg1 fetchOptions:(id)arg2 ;
-(NSMutableSet *)momentsToAdd;
-(void)setMomentsToAdd:(NSMutableSet *)arg1 ;
-(void)setMomentsToDelete:(NSMutableSet *)arg1 ;
-(NSMutableSet *)momentsToUpdate;
-(void)setMomentsToUpdate:(NSMutableSet *)arg1 ;
-(NSMutableSet *)momentsToInvalidateOnly;
-(void)setMomentsToInvalidateOnly:(NSMutableSet *)arg1 ;
-(NSArray *)momentLibraryChanges;
-(PHFetchOptions *)fetchOptions;
-(BOOL)hasAnyChanges;
-(void)setFetchOptions:(PHFetchOptions *)arg1 ;
@end

