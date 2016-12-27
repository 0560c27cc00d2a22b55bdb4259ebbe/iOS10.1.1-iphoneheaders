/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TUMetadataCache;

@interface TUMetadataClientController : NSObject {

	TUMetadataCache* _metadataCache;

}

@property (nonatomic,retain) TUMetadataCache * metadataCache;              //@synthesize metadataCache=_metadataCache - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)updateMetadataForRecentCalls:(id)arg1 ;
-(TUMetadataCache *)metadataCache;
-(id)_metadataDestinationIdForSearchItem:(id)arg1 ;
-(id)suggestionForDestinationID:(id)arg1 ;
-(id)locationForDestinationID:(id)arg1 ;
-(id)directoryLabelForDestinationID:(id)arg1 ;
-(void)updateMetadataForDestinationID:(id)arg1 ;
-(id)suggestionForSearchItem:(id)arg1 ;
-(id)locationForSearchItem:(id)arg1 ;
-(id)directoryLabelForSearchItem:(id)arg1 ;
-(void)updateMetadataForTUCall:(id)arg1 ;
-(void)setMetadataCache:(TUMetadataCache *)arg1 ;
@end
