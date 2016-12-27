/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSATheme.h>
#import <iWorkImport/KNSlideCollection.h>
#import <iWorkImport/TSSPresetSource.h>
#import <iWorkImport/TSKTransformableObject.h>
#import <iWorkImport/TSKDocumentObject.h>

@protocol OS_dispatch_queue;
@class NSString, NSArray, NSObject, TSUWeakReference, NSMutableArray, NSMutableDictionary, TSUPointerKeyDictionary, KNSlideNode, NSDictionary, TSWPParagraphStyle;

@interface KNTheme : TSATheme <KNSlideCollection, TSSPresetSource, TSKTransformableObject, TSKDocumentObject> {

	NSString* mUUID;
	NSArray* mMasters;
	NSObject*<OS_dispatch_queue> mDefaultMasterSlideNodeQueue;
	TSUWeakReference* mDefaultMasterSlideNodeReference;
	BOOL mDefaultMasterSlideNodeIsOurBestGuess;
	long long mSlideStyleIndex;
	NSMutableArray* mClassicThemeRecords;
	NSMutableDictionary* mCustomEffectTimingCurves;
	NSMutableDictionary* mSlideNodesForFormulaReferenceNamesCache;
	TSUPointerKeyDictionary* mFormulaReferenceNamesForSlideNodesCache;

}

@property (nonatomic,retain) NSString * UUID; 
@property (nonatomic,retain) NSArray * masters; 
@property (nonatomic,retain) KNSlideNode * defaultMasterSlideNode; 
@property (nonatomic,readonly) BOOL defaultMasterSlideNodeIsOurBestGuess; 
@property (nonatomic,readonly) CGSize thumbnailSize; 
@property (nonatomic,retain) NSArray * classicThemeRecords; 
@property (nonatomic,copy) NSDictionary * customEffectTimingCurves; 
@property (nonatomic,readonly) double cornerRadius; 
@property (nonatomic,readonly) TSWPParagraphStyle * defaultPresenterNotesParagraphStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) KNSlideNode * defaultSlideNodeForNewSelection; 
+(void)registerPresetSourceClasses;
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 ;
+(id)nativeThemeNameFromTheme:(id)arg1 ;
+(id)classicThemeNameFromTheme:(id)arg1 ;
+(id)themeNameForCustomOrUnknownTheme;
+(void)initialize;
+(id)generateUUID;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)modelPathComponentForChild:(id)arg1 ;
-(void)saveToArchive:(ThemeArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ThemeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)initWithContext:(id)arg1 documentStylesheet:(id)arg2 ;
-(id)undeletableStyles;
-(id)formulaReferenceNameForSlideNode:(id)arg1 ;
-(id)slideNodeForFormulaReferenceName:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)slideNamesMatchingPrefix:(id)arg1 ;
-(id)nameForMasterCopyWithName:(id)arg1 ;
-(unsigned long long)indexOfSlideNode:(id)arg1 ;
-(void)invalidateSlideNameCache;
-(void)addDefaultPresenterNotesStylesIfAbsent;
-(TSWPParagraphStyle *)defaultPresenterNotesParagraphStyle;
-(id)defaultSlideNodeForNewSelectionNearestToIndex:(unsigned long long)arg1 ;
-(void)p_cacheSlideNodes;
-(BOOL)containsSlideNode:(id)arg1 ;
-(id)orderedSlideNodesInSelection:(id)arg1 ;
-(KNSlideNode *)defaultSlideNodeForNewSelection;
-(id)p_findDefaultMaster;
-(void)p_setDefaultMasterSlideNode:(id)arg1 ;
-(void)bootstrapThemeOfSize:(CGSize)arg1 alternate:(int)arg2 ;
-(void)addMasterSlideNode:(id)arg1 withThumbnails:(id)arg2 dolcContext:(id)arg3 ;
-(void)insertMasterSlideNode:(id)arg1 withThumbnails:(id)arg2 atIndex:(unsigned long long)arg3 dolcContext:(id)arg4 ;
-(id)masterWithName:(id)arg1 ;
-(BOOL)containsMasterWithName:(id)arg1 ;
-(id)p_nameByIncrementingCounterAfterStringToAppend:(id)arg1 forOriginalName:(id)arg2 testForExistingName:(/*^block*/id)arg3 ;
-(NSDictionary *)customEffectTimingCurves;
-(BOOL)customTimingCurvesContainsName:(id)arg1 ;
-(id)customTimingCurveWithName:(id)arg1 ;
-(int)p_matchScoreForMaster:(id)arg1 toMaster:(id)arg2 ;
-(id)p_mappedMasterForMaster:(id)arg1 scoringHeuristic:(/*^block*/id)arg2 ;
-(id)mappedMasterForPasteForMaster:(id)arg1 ;
-(id)p_findSecondMaster;
-(void)p_selectSecondMasterAsDefault;
-(KNSlideNode *)defaultMasterSlideNode;
-(void)setDefaultMasterSlideNode:(KNSlideNode *)arg1 ;
-(void)bootstrapBlackThemeOfSize:(CGSize)arg1 ;
-(void)bootstrapGradientThemeOfSize:(CGSize)arg1 ;
-(void)bootstrapWhiteThemeOfSize:(CGSize)arg1 ;
-(void)addMasterSlideNode:(id)arg1 dolcContext:(id)arg2 ;
-(void)setCustomEffectTimingCurves:(NSDictionary *)arg1 ;
-(void)setCustomTimingCurve:(id)arg1 forName:(id)arg2 ;
-(void)removeCustomTimingCurveWithName:(id)arg1 ;
-(id)updatedThemeCurveInfoForPastedThemeCurves:(id)arg1 ;
-(id)themeCurvesForBuilds:(id)arg1 slideNodes:(id)arg2 ;
-(void)removeMasterSlideNode:(id)arg1 ;
-(void)removeAllMasters;
-(id)mappedMasterForThemeChangeForMaster:(id)arg1 ;
-(id)mappedMasterForPasteForSlide:(id)arg1 ;
-(void)addClassicThemeRecord:(id)arg1 ;
-(void)setClassicThemeRecords:(NSArray *)arg1 ;
-(void)removeAllClassicThemeRecords;
-(void)selectSecondMasterAsDefault;
-(id)i_findDefaultMaster;
-(void)resolveDefaultMaster;
-(NSArray *)classicThemeRecords;
-(BOOL)defaultMasterSlideNodeIsOurBestGuess;
-(double)cornerRadius;
-(void)dealloc;
-(NSString *)UUID;
-(NSArray *)masters;
-(void)setMasters:(NSArray *)arg1 ;
-(id)childEnumerator;
-(CGSize)thumbnailSize;
-(void)setUUID:(NSString *)arg1 ;
@end

