/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCCGalleryCollection.h>

@class NSArray;

@interface NTKCCFacesArrayGalleryCollection : NTKCCGalleryCollection {

	NSArray* _faces;

}

@property (nonatomic,retain) NSArray * faces;              //@synthesize faces=_faces - In the implementation block
-(id)initWithTitle:(id)arg1 faces:(id)arg2 ;
-(NSArray *)faces;
-(void)setFaces:(NSArray *)arg1 ;
-(unsigned long long)numberOfFaces;
-(id)faceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfFace:(id)arg1 ;
@end
