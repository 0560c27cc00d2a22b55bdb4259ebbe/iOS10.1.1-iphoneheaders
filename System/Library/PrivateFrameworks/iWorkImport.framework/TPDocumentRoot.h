/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSADocumentRoot.h>
#import <iWorkImport/TSDThumbnailProducer.h>
#import <iWorkImport/TSDInfoUUIDPathPrefixComponentsProvider.h>
#import <iWorkImport/TSWPDrawableOLC.h>
#import <iWorkImport/TSWPStorageParent.h>
#import <iWorkImport/TSWPChangeSessionManager.h>
#import <iWorkImport/TSWPChangeVisibility.h>
#import <iWorkImport/TSTResolverContainerNameProvider.h>
#import <iWorkImport/TSCEResolverContainer.h>

@class NSArray, TPTheme, TSSStylesheet, TSWPStorage, TPDocumentSettings, TPDrawablesZOrder, TPFloatingDrawables, NSString, NSMutableArray, TSWPChangeSession, TPPaginatedPageController, TPPageLayoutNotifier, NSMutableDictionary, NSMutableSet, TPInteractiveCanvasController, TSDThumbnailController, TPTOCController, TPSection;

@interface TPDocumentRoot : TSADocumentRoot <TSDThumbnailProducer, TSDInfoUUIDPathPrefixComponentsProvider, TSWPDrawableOLC, TSWPStorageParent, TSWPChangeSessionManager, TSWPChangeVisibility, TSTResolverContainerNameProvider, TSCEResolverContainer> {

	NSArray* _citationRecords;
	BOOL _shouldUniquifyTableNames;
	NSArray* _obsoleteTOCStyles;
	TPTheme* _theme;
	TSSStylesheet* _stylesheet;
	TSWPStorage* _bodyStorage;
	TPDocumentSettings* _settings;
	TPDrawablesZOrder* _drawablesZOrder;
	TPFloatingDrawables* _floatingDrawables;
	BOOL _usesSingleHeaderFooter;
	BOOL _needsInitialization;
	CGSize _pageSize;
	double _pageScale;
	NSString* _printerID;
	NSString* _paperID;
	unsigned long long _orientation;
	double _leftMargin;
	double _rightMargin;
	double _topMargin;
	double _bottomMargin;
	double _headerMargin;
	double _footerMargin;
	BOOL _layoutBodyVertically;
	CFLocaleRef _hyphenationLocale;
	BOOL _changeTrackingEnabled;
	NSMutableArray* _changeSessionHistory;
	TSWPChangeSession* _mostRecentChangeSession;
	TSWPChangeSession* _activeChangeSession;
	TPPaginatedPageController* _paginatedPageController;
	TPPageLayoutNotifier* _pageLayoutNotifier;
	BOOL _newDocument;
	double _currentThumbnailContainerWidth;
	unsigned _tableNameCounter;
	NSMutableDictionary* _chartsUIState;
	NSMutableDictionary* _tableInfosWithUniqueNames;
	NSMutableSet* _remappedTableNames;
	BOOL _wasCreatedFromTemplate;
	BOOL initiallyShowRuler;
	BOOL _changeTrackingPaused;
	BOOL _needsAdditionalViewStateValidation;
	TPInteractiveCanvasController* _interactiveCanvasController;
	TSDThumbnailController* _thumbnailController;
	TPTOCController* _tocController;

}

@property (nonatomic,readonly) BOOL hasTrackedChanges; 
@property (nonatomic,retain) TPTheme * theme; 
@property (nonatomic,retain) TSSStylesheet * stylesheet;                                               //@synthesize stylesheet=_stylesheet - In the implementation block
@property (nonatomic,retain) TPDrawablesZOrder * drawablesZOrder;                                      //@synthesize drawablesZOrder=_drawablesZOrder - In the implementation block
@property (nonatomic,retain) TPFloatingDrawables * floatingDrawables;                                  //@synthesize floatingDrawables=_floatingDrawables - In the implementation block
@property (nonatomic,retain) NSMutableArray * changeSessionHistory;                                    //@synthesize changeSessionHistory=_changeSessionHistory - In the implementation block
@property (nonatomic,retain) TSWPChangeSession * mostRecentChangeSession;                              //@synthesize mostRecentChangeSession=_mostRecentChangeSession - In the implementation block
@property (nonatomic,retain) TSWPChangeSession * activeChangeSession;                                  //@synthesize activeChangeSession=_activeChangeSession - In the implementation block
@property (nonatomic,retain) TPTOCController * tocController;                                          //@synthesize tocController=_tocController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * chartsUIState;                                      //@synthesize chartsUIState=_chartsUIState - In the implementation block
@property (assign,nonatomic) BOOL initiallyShowRuler; 
@property (assign,nonatomic) TPInteractiveCanvasController * interactiveCanvasController;              //@synthesize interactiveCanvasController=_interactiveCanvasController - In the implementation block
@property (nonatomic,readonly) TPPaginatedPageController * paginatedPageController;                    //@synthesize paginatedPageController=_paginatedPageController - In the implementation block
@property (nonatomic,readonly) TSDThumbnailController * thumbnailController;                           //@synthesize thumbnailController=_thumbnailController - In the implementation block
@property (nonatomic,readonly) BOOL isNewDocument;                                                     //@synthesize newDocument=_newDocument - In the implementation block
@property (nonatomic,readonly) BOOL wasCreatedFromTemplate;                                            //@synthesize wasCreatedFromTemplate=_wasCreatedFromTemplate - In the implementation block
@property (nonatomic,retain,readonly) TPDocumentSettings * settings; 
@property (nonatomic,retain,readonly) TPSection * firstSection; 
@property (nonatomic,retain,readonly) NSArray * sections; 
@property (nonatomic,retain,readonly) NSArray * nonHiddenSections; 
@property (nonatomic,retain,readonly) TSWPStorage * bodyStorage;                                       //@synthesize bodyStorage=_bodyStorage - In the implementation block
@property (assign,nonatomic) BOOL usesSingleHeaderFooter; 
@property (assign,nonatomic) CGSize pageSize; 
@property (assign,nonatomic) double pageScale; 
@property (nonatomic,copy) NSString * printerID;                                                       //@synthesize printerID=_printerID - In the implementation block
@property (nonatomic,copy) NSString * paperID;                                                         //@synthesize paperID=_paperID - In the implementation block
@property (assign,nonatomic) unsigned long long orientation;                                           //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double leftMargin; 
@property (assign,nonatomic) double rightMargin; 
@property (assign,nonatomic) double topMargin; 
@property (assign,nonatomic) double bottomMargin; 
@property (assign,nonatomic) double headerMargin; 
@property (assign,nonatomic) double footerMargin; 
@property (assign,nonatomic) BOOL layoutBodyVertically; 
@property (assign,getter=isChangeTrackingPaused,nonatomic) BOOL changeTrackingPaused;                  //@synthesize changeTrackingPaused=_changeTrackingPaused - In the implementation block
@property (assign,getter=isChangeTrackingEnabled,nonatomic) BOOL changeTrackingEnabled; 
@property (getter=isTrackingChanges,nonatomic,readonly) BOOL trackingChanges; 
@property (nonatomic,readonly) CGSize paperSize; 
@property (assign,nonatomic) BOOL needsAdditionalViewStateValidation;                                  //@synthesize needsAdditionalViewStateValidation=_needsAdditionalViewStateValidation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long contentWritingDirection; 
@property (nonatomic,readonly) BOOL isTrackingChanges; 
+(CGSize)previewImageSizeForType:(unsigned long long)arg1 ;
+(void)localizeTextStorage:(id)arg1 withTemplateBundle:(id)arg2 ;
+(CGSize)pageSizeFromPaperSize:(CGSize)arg1 pageScale:(double)arg2 orientation:(unsigned long long)arg3 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)modelPathComponentForChild:(id)arg1 ;
-(id)resolverMatchingName:(id)arg1 ;
-(void)documentDidLoad;
-(id)resolversMatchingPrefix:(id)arg1 ;
-(BOOL)resolverNameIsUsed:(id)arg1 ;
-(BOOL)isMultiPageForQuickLook;
-(void)willClose;
-(id)previewImageForSize:(CGSize)arg1 ;
-(void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1 ;
-(void)prepareNewDocumentWithTemplateBundle:(id)arg1 ;
-(void)updateWritingDirection:(unsigned long long)arg1 ;
-(id)makeStyleMapper;
-(id)makeIsolatedStyleMapper;
-(void)suspendBackgroundActivities;
-(void)resumeBackgroundActivities;
-(BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2 ;
-(void)setStylesheet:(id)arg1 andThemeForImport:(id)arg2 ;
-(id)UIStateForChart:(id)arg1 ;
-(void)setUIState:(id)arg1 forChart:(id)arg2 ;
-(TPInteractiveCanvasController *)interactiveCanvasController;
-(id)uuidPathPrefixComponentsForInfo:(id)arg1 ;
-(id)modelEnumeratorWithFlags:(unsigned long long)arg1 forObjectsPassingTest:(/*^block*/id)arg2 ;
-(BOOL)documentDisallowsHighlightsOnStorage:(id)arg1 ;
-(void)setThemeForTemplateImport:(id)arg1 ;
-(id)remappedTableNames;
-(id)resolverContainerNameForResolver:(id)arg1 ;
-(id)nameForResolverContainer:(id)arg1 ;
-(id)resolverContainerForName:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)resolverContainerNamesMatchingPrefix:(id)arg1 ;
-(id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2 ;
-(id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2 ;
-(BOOL)isPendingTableNameUniquification;
-(BOOL)autoListRecognition;
-(BOOL)autoListTermination;
-(BOOL)textIsVertical;
-(long long)contentWritingDirection;
-(BOOL)hasTrackedChanges;
-(BOOL)useLigatures;
-(void)setIndex:(int)arg1 forObject:(id)arg2 ;
-(BOOL)shouldHyphenate;
-(CFLocaleRef)hyphenationLocale;
-(id)markStringForFootnoteReferenceStorage:(id)arg1 ;
-(int)indexForObject:(id)arg1 ;
-(void)didAddDrawable:(id)arg1 ;
-(void)willRemoveDrawable:(id)arg1 ;
-(BOOL)usesSingleHeaderFooter;
-(id)citationRecords;
-(id)pageMasterOwningModel:(id)arg1 ;
-(id)changeVisibility;
-(BOOL)shouldShowChangeKind:(int)arg1 date:(id)arg2 ;
-(BOOL)shouldShowMarkupForChangeKind:(int)arg1 date:(id)arg2 ;
-(id)changeSessionManagerForModel:(id)arg1 ;
-(BOOL)cellCommentsAllowedOnInfo:(id)arg1 ;
-(BOOL)isChangeTrackingEnabled;
-(int)naturalAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 ;
-(int)verticalAlignmentForTextStorage:(id)arg1 ;
-(BOOL)supportHeaderFooterParagraphAlignmentInInspectors;
-(TPTOCController *)tocController;
-(void)setTocController:(TPTOCController *)arg1 ;
-(unsigned)nextUntitledResolverIndex;
-(unsigned)saveNextUntitledResolverIndex;
-(void)rollbackNextUntitledResolverIndex:(unsigned)arg1 ;
-(void)addRemappedTableName:(id)arg1 ;
-(void)clearRemappedTableNames;
-(void)setPaperID:(NSString *)arg1 ;
-(NSString *)paperID;
-(id)p_previewImageWithImageSize:(CGSize)arg1 ;
-(double)bodyWidth;
-(void)setUsesSingleHeaderFooter:(BOOL)arg1 ;
-(TPPaginatedPageController *)paginatedPageController;
-(TSWPStorage *)bodyStorage;
-(BOOL)footnotesShouldAffectBodyLayout;
-(double)footnoteGap;
-(BOOL)isChangeTrackingPaused;
-(void)p_uniquifyTableNames;
-(void)setChartsUIState:(NSMutableDictionary *)arg1 ;
-(CGRect)pageBoundsWithinMargins;
-(void)setBodyStorage:(id)arg1 dolcContext:(id)arg2 ;
-(void)pCreateBodyStorage;
-(void)pCreateDrawablesZOrderBodyStorage:(id)arg1 addAnchoredDrawables:(BOOL)arg2 ;
-(void)pCreateFloatingDrawables;
-(void)pCommonInitialization;
-(id)initUsingDefaultThemeWithContext:(id)arg1 ;
-(void)setDrawablesZOrder:(TPDrawablesZOrder *)arg1 ;
-(void)setFloatingDrawables:(TPFloatingDrawables *)arg1 ;
-(void)pUpgradeSection:(id)arg1 documentVersion:(unsigned long long)arg2 ;
-(void)p_upgradeTOCStyles;
-(void)p_upgradeBodyTOC;
-(void)p_upgradeTOCModelForUnity20;
-(id)p_realTOCEntryStyleFromFakeTOCEntryStyle:(id)arg1 context:(id)arg2 ;
-(void)pFinishInitialization;
-(TPDrawablesZOrder *)drawablesZOrder;
-(BOOL)layoutBodyVertically;
-(unsigned long long)pageIndexForThumbnailIdentifier:(id)arg1 ;
-(id)thumbnailIdentifierForPageIndex:(unsigned long long)arg1 ;
-(CGRect)unscaledClipRectForIdentifier:(id)arg1 ;
-(id)rootInfosForIdentifier:(id)arg1 ;
-(TPFloatingDrawables *)floatingDrawables;
-(void)readViewState;
-(NSArray *)nonHiddenSections;
-(BOOL)isSectionModel:(id)arg1 ;
-(NSMutableDictionary *)chartsUIState;
-(CGSize)thumbnailSizeForIdentifier:(id)arg1 ;
-(BOOL)reuseThumbnailerUntilIdleForIdentifier:(id)arg1 ;
-(BOOL)isTrackingChanges;
-(void)setLayoutBodyVertically:(BOOL)arg1 ;
-(void)setChangeTrackingEnabled:(BOOL)arg1 ;
-(CGRect)pConjureUpBodyRect;
-(id)initForThemeImportWithContext:(id)arg1 ;
-(void)invalidateThumbnailForPageIndex:(unsigned long long)arg1 ;
-(void)pageCountDidChangeForPageController:(id)arg1 ;
-(void)thumbnailContainerDidChange:(id)arg1 ;
-(Class)thumbnailImagerClass;
-(double)valueForMargin:(int)arg1 ;
-(void)setValue:(double)arg1 forMargin:(int)arg2 ;
-(BOOL)pageMastersAllowDrawable:(id)arg1 ;
-(void)upgradeFromOldSectionWithPageSize:(CGSize)arg1 leftMargin:(double)arg2 rightMargin:(double)arg3 topMargin:(double)arg4 bottomMargin:(double)arg5 headerMargin:(double)arg6 footerMargin:(double)arg7 ;
-(BOOL)isArchivedViewStateValid:(id)arg1 ;
-(BOOL)isNewDocument;
-(BOOL)wasCreatedFromTemplate;
-(NSMutableArray *)changeSessionHistory;
-(void)setChangeSessionHistory:(NSMutableArray *)arg1 ;
-(TSWPChangeSession *)mostRecentChangeSession;
-(void)setMostRecentChangeSession:(TSWPChangeSession *)arg1 ;
-(TSWPChangeSession *)activeChangeSession;
-(void)setActiveChangeSession:(TSWPChangeSession *)arg1 ;
-(BOOL)initiallyShowRuler;
-(void)setInitiallyShowRuler:(BOOL)arg1 ;
-(void)setInteractiveCanvasController:(TPInteractiveCanvasController *)arg1 ;
-(TSDThumbnailController *)thumbnailController;
-(void)setChangeTrackingPaused:(BOOL)arg1 ;
-(BOOL)needsAdditionalViewStateValidation;
-(void)setNeedsAdditionalViewStateValidation:(BOOL)arg1 ;
-(int)footnoteKind;
-(unsigned long long)p_autoNumberForStorage:(id)arg1 footnoteNumbering:(int)arg2 footnoteKind:(int)arg3 ;
-(id)storagesWithChanges;
-(BOOL)needsToExplainEnablingChangeTracking;
-(void)dealloc;
-(TPDocumentSettings *)settings;
-(void)setOrientation:(unsigned long long)arg1 ;
-(unsigned long long)orientation;
-(double)topMargin;
-(void)setRightMargin:(double)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(unsigned long long)writingDirection;
-(double)rightMargin;
-(CGSize)paperSize;
-(NSString *)printerID;
-(void)setPrinterID:(NSString *)arg1 ;
-(void)willEnterForeground;
-(NSArray *)sections;
-(TPSection *)firstSection;
-(void)viewWillAppear;
-(void)viewDidAppear;
-(id)childEnumerator;
-(TPTheme *)theme;
-(void)setTheme:(TPTheme *)arg1 ;
-(unsigned long long)applicationType;
-(void)willHide;
-(void)setPageSize:(CGSize)arg1 ;
-(double)leftMargin;
-(double)headerMargin;
-(double)bottomMargin;
-(void)setTopMargin:(double)arg1 ;
-(void)setLeftMargin:(double)arg1 ;
-(CGSize)pageSize;
-(void)didEnterBackground;
-(TSSStylesheet *)stylesheet;
-(void)setStylesheet:(TSSStylesheet *)arg1 ;
-(void)setBottomMargin:(double)arg1 ;
-(void)setHeaderMargin:(double)arg1 ;
-(void)setFooterMargin:(double)arg1 ;
-(double)footerMargin;
-(void)setPageScale:(double)arg1 ;
-(double)pageScale;
@end

