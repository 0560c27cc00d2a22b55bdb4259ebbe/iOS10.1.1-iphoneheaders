/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCCFacesArrayGalleryCollection.h>
#import <NTKCustomization/NTKCompanionFeaturedComplicationsAppLibraryObserver.h>

@class NSArray, NTKCompanionFeaturedComplicationsAppLibrary, NSString;

@interface NTKCCComplicationGalleryCollection : NTKCCFacesArrayGalleryCollection <NTKCompanionFeaturedComplicationsAppLibraryObserver> {

	NSArray* _apps;
	NTKCompanionFeaturedComplicationsAppLibrary* _appLibrary;

}

@property (nonatomic,retain) NTKCompanionFeaturedComplicationsAppLibrary * appLibrary;              //@synthesize appLibrary=_appLibrary - In the implementation block
@property (nonatomic,readonly) NSArray * apps; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_availableFaceStyles;
-(void)_updateApps;
-(void)_updateAppsSuppressingNotification:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(NSArray *)apps;
-(void)appLibrary:(id)arg1 didAddApp:(id)arg2 ;
-(void)appLibrary:(id)arg1 didUpdateApp:(id)arg2 ;
-(void)appLibrary:(id)arg1 didRemoveApp:(id)arg2 ;
-(void)appLibrary:(id)arg1 didUpdateAppIcon:(id)arg2 ;
-(NTKCompanionFeaturedComplicationsAppLibrary *)appLibrary;
-(void)setAppLibrary:(NTKCompanionFeaturedComplicationsAppLibrary *)arg1 ;
@end
