/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, MiroCircularProgressBar, UIImageView, Reachability;

@interface MiroSmartMusicMenuCell : UITableViewCell {

	BOOL _observingSong;
	float _progress;
	NSString* _songUID;
	UILabel* _songName;
	UILabel* _artistName;
	MiroCircularProgressBar* _progressIndicator;
	UIImageView* _cloudStatus;
	UIImageView* _artwork;
	Reachability* _reachability;

}

@property (assign,nonatomic,__weak) UILabel * songName;                                       //@synthesize songName=_songName - In the implementation block
@property (assign,nonatomic,__weak) UILabel * artistName;                                     //@synthesize artistName=_artistName - In the implementation block
@property (assign,nonatomic,__weak) MiroCircularProgressBar * progressIndicator;              //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * cloudStatus;                                //@synthesize cloudStatus=_cloudStatus - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * artwork;                                    //@synthesize artwork=_artwork - In the implementation block
@property (assign,nonatomic) BOOL observingSong;                                              //@synthesize observingSong=_observingSong - In the implementation block
@property (nonatomic,retain) Reachability * reachability;                                     //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,retain) NSString * songUID;                                              //@synthesize songUID=_songUID - In the implementation block
@property (assign,nonatomic) float progress;                                                  //@synthesize progress=_progress - In the implementation block
+(double)dynamicTypeHeight;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)awakeFromNib;
-(void)setProgress:(float)arg1 ;
-(void)prepareForReuse;
-(void)_updateTextColors;
-(void)_setProgress:(float)arg1 ;
-(float)progress;
-(UIImageView *)artwork;
-(void)setArtwork:(UIImageView *)arg1 ;
-(UILabel *)artistName;
-(void)setArtistName:(UILabel *)arg1 ;
-(UILabel *)songName;
-(void)setSongUID:(NSString *)arg1 ;
-(NSString *)songUID;
-(void)_setupReachabiliy;
-(void)setReachability:(Reachability *)arg1 ;
-(void)networkStatusChanged:(id)arg1 ;
-(Reachability *)reachability;
-(void)_updateCloudStatus;
-(long long)networkStatus;
-(UIImageView *)cloudStatus;
-(MiroCircularProgressBar *)progressIndicator;
-(void)updateArtwork;
-(void)updateSongNameForSong:(id)arg1 ;
-(void)_updateProgressIndicator:(float)arg1 ;
-(BOOL)observingSong;
-(void)setObservingSong:(BOOL)arg1 ;
-(void)_songAssetChanged:(id)arg1 ;
-(void)_updateDownload:(id)arg1 ;
-(void)_updateSongPreview:(id)arg1 ;
-(void)setSongName:(UILabel *)arg1 ;
-(void)setProgressIndicator:(MiroCircularProgressBar *)arg1 ;
-(void)setCloudStatus:(UIImageView *)arg1 ;
@end

