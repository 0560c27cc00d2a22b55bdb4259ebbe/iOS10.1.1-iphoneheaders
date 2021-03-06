/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface KNMacUILayout : NSObject <NSCopying, NSMutableCopying> {

	BOOL mShowingInspectorPane;
	BOOL mInspectorPaneAutoHidden;
	BOOL mShowingSidebar;
	BOOL mShowingNavigatorViewInSidebar;
	BOOL mShowingPresenterNotes;
	BOOL mShowingLightTable;
	BOOL mShowingMasterSlides;
	long long mInspectorPaneViewMode;

}

@property (getter=p_isShowingNavigatorViewInSidebar,nonatomic,readonly) BOOL p_showingNavigatorViewInSidebar; 
@property (getter=isShowingSidebar,nonatomic,readonly) BOOL showingSidebar; 
@property (nonatomic,readonly) long long sidebarViewMode; 
@property (getter=isShowingLightTable,nonatomic,readonly) BOOL showingLightTable; 
@property (getter=isShowingPresenterNotes,nonatomic,readonly) BOOL showingPresenterNotes; 
@property (nonatomic,readonly) long long inspectorPaneHiddenState; 
@property (nonatomic,readonly) long long inspectorPaneViewMode; 
@property (getter=isShowingMasterSlides,nonatomic,readonly) BOOL showingMasterSlides; 
+(id)uiLayoutFromArchive:(const DesktopUILayoutArchive*)arg1 unarchiver:(id)arg2 context:(id)arg3 ;
-(void)saveToArchive:(DesktopUILayoutArchive*)arg1 archiver:(id)arg2 ;
-(void)setShowingInspectorPane:(BOOL)arg1 ;
-(void)setInspectorPaneAutoHidden:(BOOL)arg1 ;
-(BOOL)isShowingSidebar;
-(long long)sidebarViewMode;
-(BOOL)isShowingPresenterNotes;
-(BOOL)isShowingLightTable;
-(BOOL)showingInspectorPane;
-(BOOL)inspectorPaneAutoHidden;
-(long long)inspectorPaneViewMode;
-(BOOL)isShowingMasterSlides;
-(id)archivedUILayoutInContext:(id)arg1 ;
-(BOOL)p_isShowingNavigatorViewInSidebar;
-(long long)inspectorPaneHiddenState;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

