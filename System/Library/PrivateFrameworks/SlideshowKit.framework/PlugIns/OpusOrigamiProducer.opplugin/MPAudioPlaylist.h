/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol MPAudioSupport;
@class NSMutableArray, MCAudioPlaylist, MCPlug, NSObject, MCMontage, NSMutableDictionary, MPPlaylistInternal;

@interface MPAudioPlaylist : NSObject <NSCopying, NSCoding> {

	NSMutableArray* _songs;
	MCAudioPlaylist* _audioPlaylist;
	MCPlug* _plug;
	NSObject*<MPAudioSupport> _parentObject;
	MCMontage* _montage;
	NSMutableDictionary* _attributes;
	MPPlaylistInternal* _internal;

}

@property (assign) double fadeInDuration; 
@property (assign) double fadeOutDuration; 
@property (assign) double duckInDuration; 
@property (assign) double duckOutDuration; 
@property (assign) double duckLevel; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)audioPlaylist;
-(double)duckInDuration;
-(double)duckLevel;
-(void)copyStruct:(id)arg1 ;
-(double)duckOutDuration;
-(void)copySongs:(id)arg1 ;
-(void)addSong:(id)arg1 ;
-(void)setDuckLevel:(double)arg1 ;
-(void)removeSongsAtIndices:(id)arg1 ;
-(void)setDuckOutDuration:(double)arg1 ;
-(void)insertSongs:(id)arg1 atIndex:(long long)arg2 ;
-(void)setDuckInDuration:(double)arg1 ;
-(void)setPlug:(id)arg1 ;
-(id)montage;
-(void)addSongs:(id)arg1 ;
-(long long)countOfSongs;
-(void)removeAllSongs;
-(void)replaceObjectInSongsAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(void)removeObjectFromSongsAtIndex:(long long)arg1 ;
-(id)objectInSongsAtIndex:(long long)arg1 ;
-(void)insertObject:(id)arg1 inSongsAtIndex:(long long)arg2 ;
-(void)moveSongsFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)cleanup;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setMontage:(id)arg1 ;
-(id)parentObject;
-(void)setParentObject:(id)arg1 ;
-(id)audioPlaylist;
-(void)setAudioPlaylist:(id)arg1 ;
-(id)songs;
-(id)parentDocument;
@end

