/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MusicEntityProviding.h>

@class MusicShowCompleteCollectionEntityValueProvider, MusicCompleteOfferEntityProvider, NSString;

@interface MusicShowCompleteCollectionEntityProvider : NSObject <MusicEntityProviding> {

	MusicShowCompleteCollectionEntityValueProvider* _showCompleteCollectionEntityValueProvider;
	BOOL _shouldIncludeShowCompleteButton;
	MusicCompleteOfferEntityProvider* _completeOfferEntityProvider;
	NSString* _localizedTitle;

}

@property (nonatomic,readonly) MusicCompleteOfferEntityProvider * completeOfferEntityProvider;              //@synthesize completeOfferEntityProvider=_completeOfferEntityProvider - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                                                       //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeStoreCompleteOffer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)numberOfSections;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(BOOL)hasEntities;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfIndexBarEntries;
-(unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)setShouldIncludeStoreCompleteOffer:(BOOL)arg1 ;
-(id)initWithCompleteOfferEntityProvider:(id)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(BOOL)hasEntitiesNotInLibrary;
-(BOOL)shouldIncludeStoreCompleteOffer;
-(void)_completeOfferEntityProviderStoreCompleteOfferAvailableDidChangeNotification:(id)arg1 ;
-(id)_showCompleteCollectionEntityValueProvider;
-(void)_updateShouldIncludeShowCompleteButton;
-(MusicCompleteOfferEntityProvider *)completeOfferEntityProvider;
@end

