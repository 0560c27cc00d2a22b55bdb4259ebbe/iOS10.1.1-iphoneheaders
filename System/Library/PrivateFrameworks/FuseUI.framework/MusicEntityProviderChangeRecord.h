/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MusicEntityValueProviding;
@class NSIndexPath;

@interface MusicEntityProviderChangeRecord : NSObject <NSCopying> {

	NSIndexPath* _destinationIndexPath;
	id<MusicEntityValueProviding> _entityValueProvider;
	NSIndexPath* _sourceIndexPath;
	long long _type;

}

@property (nonatomic,readonly) long long type;                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id<MusicEntityValueProviding> insertedEntityValueProvider; 
@property (nonatomic,readonly) NSIndexPath * insertedIndexPath; 
@property (nonatomic,readonly) id<MusicEntityValueProviding> movedEntityValueProvider; 
@property (nonatomic,readonly) NSIndexPath * moveSourceIndexPath; 
@property (nonatomic,readonly) NSIndexPath * moveDestinationIndexPath; 
@property (nonatomic,readonly) id<MusicEntityValueProviding> deletedEntityValueProvider; 
@property (nonatomic,readonly) NSIndexPath * deletedIndexPath; 
-(id)init;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<MusicEntityValueProviding>)deletedEntityValueProvider;
-(id)initWithInsertedEntityValueProvider:(id)arg1 atIndexPath:(id)arg2 ;
-(id<MusicEntityValueProviding>)insertedEntityValueProvider;
-(NSIndexPath *)insertedIndexPath;
-(id)initWithMovedEntityValueProvider:(id)arg1 fromSourceIndexPath:(id)arg2 toDestinationIndexPath:(id)arg3 ;
-(id<MusicEntityValueProviding>)movedEntityValueProvider;
-(NSIndexPath *)moveSourceIndexPath;
-(NSIndexPath *)moveDestinationIndexPath;
-(id)initWithDeletedEntityValueProvider:(id)arg1 atIndexPath:(id)arg2 ;
-(NSIndexPath *)deletedIndexPath;
@end

