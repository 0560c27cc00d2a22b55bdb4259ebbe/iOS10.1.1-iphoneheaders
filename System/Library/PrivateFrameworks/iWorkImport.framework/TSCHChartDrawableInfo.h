/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDDrawableInfo.h>
#import <iWorkImport/TSCECalculationEngineRegistration.h>
#import <iWorkImport/TSDReducibleImageContainer.h>
#import <iWorkImport/TSKCustomFormatContainingInfo.h>
#import <iWorkImport/TSPCopying.h>
#import <iWorkImport/TSKSearchable.h>
#import <iWorkImport/TSKModel.h>
#import <iWorkImport/TSSPresetSource.h>
#import <iWorkImport/TSCHStyleSwapSupporting.h>
#import <iWorkImport/TSDMixing.h>
#import <iWorkImport/TSSStyleClient.h>
#import <iWorkImport/TSDCompatibilityAwareMediaContainer.h>

@protocol TSCHMediatorProvider;
@class TSCHChartInfo, TSPObject, TSCHChunkManager, NSString, NSDictionary;

@interface TSCHChartDrawableInfo : TSDDrawableInfo <TSCECalculationEngineRegistration, TSDReducibleImageContainer, TSKCustomFormatContainingInfo, TSPCopying, TSKSearchable, TSKModel, TSSPresetSource, TSCHStyleSwapSupporting, TSDMixing, TSSStyleClient, TSDCompatibilityAwareMediaContainer> {

	TSCHChartInfo* mChart;
	TSPObject*<TSCHMediatorProvider> mMediatorPersistentObject;
	TSCHChunkManager* mChunkManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TSCHChartInfo * chart; 
@property (nonatomic,readonly) TSCHChunkManager * chunkManager; 
@property (nonatomic,readonly) unsigned long long multiDataSetIndex; 
@property (nonatomic,readonly) NSDictionary * datasForReplacingMediaContentsWithAssociatedHints; 
+(BOOL)needsObjectUUID;
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 ;
-(BOOL)aspectRatioLocked;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)willModify;
-(id)componentRootObject;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)registerWithCalculationEngineForDocumentLoad:(id)arg1 ;
-(void)unregisterFromCalculationEngine:(id)arg1 ;
-(BOOL)registerLast;
-(CFUUIDRef)formulaOwnerID;
-(id)objectToArchiveInDependencyTracker;
-(id)changeDetailsForCustomFormatListDidUpdateToCustomFormat:(id)arg1 ;
-(void)upgradeFormatsForCustomFormatListU2_0;
-(void)reassignPasteboardCustomFormatKeys;
-(id)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
-(id)applyStyleSwapTuples:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)setGeometry:(id)arg1 omitLegendResize:(BOOL)arg2 ;
-(id)p_copyFor3DAs2DWithContext:(id)arg1 chartFrame:(CGRect)arg2 legendFrame:(CGRect)arg3 ;
-(Class)repClass;
-(id)applyStyleSwapTuple:(id)arg1 ;
-(id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned long long)arg2 ;
-(unsigned long long)multiDataSetIndex;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(BOOL)hasReferenceLines;
-(id)animationFilters;
-(id)p_drawableGeometry;
-(void)p_setDrawableGeometry:(id)arg1 clearObjectPlaceholderFlag:(BOOL)arg2 ;
-(id)infoGeometryForVisiblePositioningInfoGeometry:(id)arg1 ;
-(id)childInfos;
-(TSCHChunkManager *)chunkManager;
-(BOOL)hasBackgroundLayerForPieChart;
-(id)initFromPreUFFArchiveWithUnarchiver:(id)arg1 ;
-(unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1 ;
-(id)textureDeliveryStylesLocalized:(BOOL)arg1 animationFilter:(id)arg2 ;
-(BOOL)isVisibleAtBeginningOfMagicChartBuildForDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 ;
-(id)initWithContext:(id)arg1 chart:(id)arg2 ;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartBodyFrame:(id)arg4 chartAreaFrame:(id)arg5 circumscribingFrame:(id)arg6 legendFrame:(id)arg7 stylePreset:(id)arg8 privateSeriesStyles:(id)arg9 chartNonStyle:(id)arg10 legendNonStyle:(id)arg11 valueAxisNonStyles:(id)arg12 categoryAxisNonStyles:(id)arg13 seriesNonStyles:(id)arg14 refLineNonStylesMap:(id)arg15 refLineStylesMap:(id)arg16 ;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartBodyFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11 refLineNonStylesMap:(id)arg12 refLineStylesMap:(id)arg13 ;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartAreaFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11 refLineNonStylesMap:(id)arg12 refLineStylesMap:(id)arg13 ;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 circumscribingFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11 refLineNonStylesMap:(id)arg12 refLineStylesMap:(id)arg13 ;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartAreaFrame:(id)arg4 legendFrame:(id)arg5 stylePreset:(id)arg6 privateSeriesStyles:(id)arg7 chartNonStyle:(id)arg8 legendNonStyle:(id)arg9 valueAxisNonStyles:(id)arg10 categoryAxisNonStyles:(id)arg11 seriesNonStyles:(id)arg12 refLineNonStylesMap:(id)arg13 refLineStylesMap:(id)arg14 ;
-(void)setPersistentMediator:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)transformedGeometryWithTransform:(CGAffineTransform)arg1 inBounds:(CGRect)arg2 ;
-(CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2 ;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 chartBodyFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5 ;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 chartAreaFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5 ;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 circumscribingFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5 ;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 chartAreaFrame:(id)arg3 legendFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 ;
-(CGRect)visibleBoundsForPositioning;
-(void)tsaMoveToPosition:(CGPoint)arg1 size:(CGSize)arg2 ;
-(void)setInsertionCenterPosition:(CGPoint)arg1 ;
-(unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 ;
-(BOOL)reverseChunkingIsSupported;
-(BOOL)shouldAddMultiDataBuildWhenAddingToDocument;
-(id)localizedChunkNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3 ;
-(BOOL)supportsHyperlinks;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)canSizeBeChangedIncrementally;
-(long long)mediaCompatibilityTypeForData:(id)arg1 associatedHint:(id)arg2 ;
-(BOOL)isEquivalentForSerializationRoundTrip:(id)arg1 ;
-(id)additionalObjectsToCopy;
-(void)dealloc;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(BOOL)isSelectable;
-(Class)layoutClass;
-(int)elementKind;
-(void)acceptVisitor:(id)arg1 ;
-(TSCHChartInfo *)chart;
@end

