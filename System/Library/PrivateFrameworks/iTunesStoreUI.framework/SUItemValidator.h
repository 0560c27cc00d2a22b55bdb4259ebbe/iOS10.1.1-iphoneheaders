/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface SUItemValidator : NSObject {

	NSMutableArray* _collectionTests;
	NSMutableArray* _itemTests;

}

@property (nonatomic,readonly) NSArray * validationTests; 
-(void)dealloc;
-(BOOL)validateItems:(id)arg1 offers:(id)arg2 error:(id*)arg3 ;
-(void)addCollectionValidationTests:(id)arg1 ;
-(void)addItemValidationTests:(id)arg1 ;
-(void)removeValidationTest:(id)arg1 ;
-(BOOL)validateItems:(id)arg1 error:(id*)arg2 ;
-(NSArray *)validationTests;
@end

