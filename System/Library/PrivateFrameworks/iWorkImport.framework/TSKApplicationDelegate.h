/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKApplicationDelegate.h>

@protocol TSKApplicationDelegate
@optional
-(long long)maximumFontSize;

@end


@protocol TSKCompatibilityDelegate;
@class NSString, NSDate;

@interface TSKApplicationDelegate : NSObject <TSKApplicationDelegate> {

	id<TSKCompatibilityDelegate> _compatibilityDelegate;

}

@property (nonatomic,readonly) BOOL tableHeaderInspectorShowsFreezeHeaderRowsSwitch; 
@property (nonatomic,readonly) BOOL tableHeaderInspectorShowsFreezeHeaderColumnsSwitch; 
@property (nonatomic,readonly) BOOL tableHeaderInspectorShowsRepeatHeaderRowsSwitch; 
@property (nonatomic,readonly) BOOL tableCellInspectorShowsNaturalAlignment; 
@property (nonatomic,readonly) BOOL textInspectorShowsMoreSubpane; 
@property (nonatomic,retain) id<TSKCompatibilityDelegate> compatibilityDelegate;                     //@synthesize compatibilityDelegate=_compatibilityDelegate - In the implementation block
@property (nonatomic,readonly) NSString * applicationName; 
@property (nonatomic,readonly) NSString * documentTypeDisplayName; 
@property (nonatomic,readonly) NSString * documentTypeDisplayNameForSharingInvitation; 
@property (nonatomic,readonly) NSString * templateTypeDisplayName; 
@property (getter=isActivating,readonly) BOOL activating; 
@property (getter=isInBackground,readonly) BOOL inBackground; 
@property (nonatomic,readonly) BOOL designModeEnabled; 
@property (nonatomic,readonly) BOOL performanceModeEnabled; 
@property (nonatomic,readonly) BOOL isCanvasFullScreen; 
@property (assign,nonatomic) unsigned long long iWorkAuthorColorIndex; 
@property (nonatomic,copy) NSString * iWorkAuthorName; 
@property (nonatomic,readonly) NSString * iWorkAuthorPrivateID; 
@property (nonatomic,readonly) NSString * cloudKitContainerIdentifier; 
@property (nonatomic,readonly) NSString * bladerunnerContainerIdentifier; 
@property (nonatomic,readonly) NSDate * applicationLaunchTime; 
+(id)platform_sharedDelegate;
+(id)documentDirectoryPath;
+(void)setDelegate:(id)arg1 ;
+(id)sharedDelegate;
-(id)invalidURLSchemes;
-(id<TSKCompatibilityDelegate>)compatibilityDelegate;
-(void)setIWorkAuthorName:(NSString *)arg1 ;
-(void)setIWorkAuthorColorIndex:(unsigned long long)arg1 ;
-(NSString *)iWorkAuthorName;
-(unsigned long long)iWorkAuthorColorIndex;
-(NSString *)iWorkAuthorPrivateID;
-(BOOL)designModeEnabled;
-(id)appChartPropertyOverrides;
-(BOOL)supportsShrinkTextToFit;
-(BOOL)shouldRenderContactShadow;
-(BOOL)shouldRenderCurvedShadow;
-(BOOL)tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
-(BOOL)tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
-(BOOL)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
-(BOOL)tableCellInspectorShowsNaturalAlignment;
-(BOOL)textInspectorShowsMoreSubpane;
-(id)createCompatibilityDelegate;
-(void)setCompatibilityDelegate:(id<TSKCompatibilityDelegate>)arg1 ;
-(NSDate *)applicationLaunchTime;
-(id)applicationNameForTitleBar;
-(NSString *)documentTypeDisplayName;
-(NSString *)documentTypeDisplayNameForSharingInvitation;
-(NSString *)templateTypeDisplayName;
-(BOOL)isCanvasFullScreen;
-(CGRect)applicationToolbarFrame;
-(BOOL)supportsRTL;
-(BOOL)sidebarPositionRespectsUserInterfaceLayoutDirection;
-(BOOL)shouldValidateMasterLayoutWhileInsertingRows;
-(id)previewImageForType:(id)arg1 ;
-(id)defaultHyperlinkURL;
-(BOOL)performanceModeEnabled;
-(BOOL)isActivating;
-(NSString *)cloudKitContainerIdentifier;
-(NSString *)bladerunnerContainerIdentifier;
-(void)logLaunchTime;
-(void)logDocumentCreationWithImportState:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)openURL:(id)arg1 ;
-(BOOL)isInBackground;
-(NSString *)applicationName;
@end
