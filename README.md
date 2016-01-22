Lobi
====

ダウンロード
------------

バージョン毎のSDK及びサンプルコードがパッケージされたものが取得できます。  

- iOS
	- LobiRec /ランキング
		- CocoaTouch / Unity / Cocos2d / Cocos2d-x  
- Android
	- LobiRec / ランキング
		- AndroidOS / Unity / Cocos2d-x  

[https://github.com/kayac/Lobi/releases](https://github.com/kayac/Lobi/releases)

登録
----

SDKを使用するにはアプリケーションの登録しクライアントIDを発行する必要があります。  
アプリケーションの登録は[https://developer.lobi.co/myapps](https://developer.lobi.co/myapps)から行ってください。

ドキュメント
-----------

ドキュメントは以下を確認してください  

- [https://github.com/kayac/Lobi/wiki](https://github.com/kayac/Lobi/wiki)  
- [Lobi SDK Reference](http://kayac.github.io/Lobi/iOS/LobiSDK/LobiReference/index.html)  



リリースノート
----------------------------
- v6.4.7 - 2016/1/22 ダウンロード
    [ダウンロード](https://github.com/kayac/Lobi/archive/v6.4.7.zip) 
    - Android Unity5.3対応（Unity5.1以降の録音方式を変更）
    - Cocos2d-x 3.6から3.9の録画対応（3.6以降のAudioEngine, SimpleAudioEngineは対応作業中）

- v6.4.6 - 2015/11/12 ダウンロード
    [ダウンロード](https://github.com/kayac/Lobi/archive/v6.4.6.zip) 
    - Unity5.2、Android6.0の環境ではlobirecexternalaudioライブラリを正しく読み込めないことがある問題を修正

- v6.4.5 - 2015/11/2
    [ダウンロード](https://github.com/kayac/Lobi/archive/v6.4.5.zip) 
    - Android インカメラ録画に対応(Cocos2d-x, Unity 4)
    - iOS Metal サポート(Unity4.6, Unity5.0, Unity5.1) 
        - これにより cocos2d/2d-xの初期化時に[useOpenGLES](https://github.com/kayac/Lobi/wiki/iOS-Implement-LobiRecSDK-Cocos2d#lobi-sdkの初期化処理) を呼び出す必要があります。

- v6.4.4 - 2015/9/17
    [ダウンロード](https://github.com/kayac/Lobi/archive/v6.4.4.zip) 
    - iOS 動画投稿が正常に開始しない問題の修正
    
- v6.4.3 - 2015/9/16
    [ダウンロード](https://github.com/kayac/Lobi/archive/v6.4.3.zip) 
    - iOS9対応。詳細は[iOS9対応について](https://github.com/kayac/Lobi/wiki/LobiSDK-iOS9)をご参照下さい。
    - iOS Unity5.2対応
    - Lobiにログイン済みかどうかを取得するAPIを追加
    
- v6.4.2 - 2015/8/13
    [ダウンロード](https://github.com/kayac/Lobi/archive/v6.4.2.zip) 
    - Android Unity 5.1対応
    
- v6.4.1 - 2015/8/11
    [ダウンロード](https://github.com/kayac/Lobi/archive/v6.4.1.zip) 
    - 特集動画機能の追加。詳細は[LobiRec 動画一覧画面について](https://github.com/kayac/Lobi/wiki/Lobi-Rec-Videos-Page)をご参照下さい。
    - 端末に保存されている動画を削除するAPIを追加 
    
- v6.2.0 - 2015/6/12
    [ダウンロード](https://github.com/kayac/Lobi/archive/v6.2.0.zip) 
    - フォロー機能の追加 
    - UIの改善
    - Android 通知機能の追加
    - Android x86バイナリの追加。 **ゲームもx86バイナリをビルドするようにしてください** 
    - iOS カスタムデザインのiPhone6/6plus対応
    - iOS Unity5.1対応

- v5.4.14 - 2015/4/27
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.4.14.zip)  
    - Cocos2d-x v3 対応
    - Android 5.1 対応

- v5.4.13 - 2015/4/2
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.4.13.zip)  
    - iOS Unity 5 に対応。詳細は[LobiSDK Unity5](https://github.com/kayac/Lobi/wiki/LobiSDK-Unity5)をご参照下さい
    - iOS Unity でネットワークに繋がらない状態で動画一覧画面を表示するとUnityが固まる問題の修正
    - Android Unity 5 に対応。（マルチスレッドレンダリング未対応）
    - Android Unity での録画時CPU負荷を軽減

- v5.4.12 - 2015/3/18
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.4.12.zip)  
    - Android Unity 4.5 以降、Device Filter に FAT を設定した時のパフォーマンスを改善
    - iOS Lobiのアカウントが既に存在しているかを取得するAPIのIFを`isSignedIn`に変更

- v5.4.11 - 2015/2/6
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.4.11.zip)  
    - Android 4.1, 4.2 におけるランキング画面のローディング表示を修正

- v5.4.10 - 2015/1/29
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.4.10.zip)  
    - iOS で Cocos2d 及び Cocos2d-x での BGM 停止から再生が正しく最初から再生されるように  
    - iOS で Unity から録画停止を呼び出した際に録画完了の通知を受け取れるように  

- v5.4.9 - 2015/1/20
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.4.9.zip)
    - Android Rec 録画フレームレートを向上（CapturePerFrameの最小値を1に引き下げ）
    - Unity4.5.3以上、AndroidにおけるMultiThreaded Renderingに対応
    
- v5.4.8 - 2014/12/17
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.4.8.zip)
    - iOS Unity で、バックグラウンドから復帰時に音声が遅れる問題を修正
    
- v5.4.7 - 2014/12/12
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.4.7.zip)
    - Unity4.5.5以上、iPhone6/6plusにおける録画エンコード処理不正の問題を修正

- v5.4.6 - 2014/12/1
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.4.6.zip)
    - Sticky Recording機能のUnity対応
    - プロフィール画面にLobiアカウントを表示
    - Cocos2d-x 2.2.5 対応 (Android)
    - Android 5.0 Lollipop 対応 (Cocos2d-x, Unity)
    
- v5.4.5 - 2014/10/30
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.4.5.zip)
    - 動画メタ情報機能のUnity対応
    - 動画投稿後のポップアップに、「動画を確認」の項目を追加
    
- v5.4.4 - 2014/10/15
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.4.4.zip)  
    - UnityAppControllerのopenURLが呼ばれない問題の修正 (iOS・Unity)
    
- v5.4.3 - 2014/10/8
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.4.3.zip)  
    - 動画へのメタ情報付与・メタ情報検索機能 (Android・Cocos2d-x)
    - 動画投稿画面のデザイン更新 (Android)
    - 一部のゲームで発生していた、タブレット端末の不具合を解消 (Android)
    - strict exidモードの追加 (Android)

- v5.4.2 - 2014/10/6
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.4.2.zip)  
    - 録画時スクリーンショットを行うことで、音声がずれる問題の修正(iOS)  
    - ランドスケープの際SNSログイン画面のレイアウトが崩れる問題を修正(iOS)  

- v5.4.1 - 2014/10/2
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.4.1.zip)  
    - iOS8対応  
    - ChatSDKを削除

- v5.4 - 2014/09/12
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.4.zip)  
    - iOS RecSDK 録画性能の改善  
    - iOS RecSDK 録画中インジケータの追加  
    - iOS RecSDK あとのせ動画編集機能の一時削除  

- v5.3.13 - 2014/08/29
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.3.13.zip)
    - Android RecSDK ユーザビリティの改善
    - Android RecSDK 録音タイミングの改善
    - iOS ChatSDK API呼び出し時のエラーレスポンスをRankingSDKの形式に合わせる
    
- v5.3.12 - 2014/08/26
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.3.12.zip)
    - Android RecSDK 対応端末の更新
    
- v5.3.11 - 2014/08/14
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.3.11.zip)
    - Android ChatSDK App Link の修正
    - Android RecSDK Cocos2d-x スコア送信の修正
    - Android RecSDK 動画アップローダの改善
    - Android RecSDK Unity の改善
        - 解像度の変更に対応
        - 音割れの修正    
    
- v5.3.10 - 2014/08/04
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.3.10.zip)
    - Android RecSDK メモリ・CPU使用量の削減
    - Android RecSDK Unity 4.2の再対応
    - iOS RecSDK Cocos2d 及び Cocos2d-x で効果音量の変更が行われない問題に対応
    - iOS RecSDK メモリ使用量の削減
    - iOS RecSDK Unity で音が遅れる場合がある問題に対応
    - iOS RecSDK 横画面表示時のネタバレ防止機能を最適化
    
- v5.3.9 - 2014/07/30
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.3.9.zip)
    - App Link機能対応 (Unity・Android・iOS)
    
- v5.3.8 - 2014/07/24
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.3.8.zip)
    - 1on1 chatの実装 (Unity)
    
- v5.3.7 - 2014/07/23
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.3.7.zip)
    - Android Rec SDK を Unity 4.5 に対応
      - 本バージョンからv5.3.9までは Android Rec SDK は Unity 4.2 に非対応
    - 一部 Tegra GPU での録画画面の比率を修正
    
- v5.3.6 - 2014/07/17
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.3.6.zip)
    - Android Ranking SDKで、proguardがかかっていた定数を修正

- v5.3.5 - 2014/07/17
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.3.5.zip)
    - 1on1 chatの実装 (android ネイティブ)
    - AndroidManifest.xmlのpermissionの見直し (android)
    - LobiRecのActionBarの挙動を修正 (android)
    - UnityでのAndroidビルドの際の不具合を修正

- v5.3.4 - 2014/07/11
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.3.4.zip)
    - Unity / cocos2d / cocos2d-xの導入方法を簡易化(iOS)

    - **iOS LobiRecSDKについて導入方法が簡易化されています。[ドキュメントを確認ください](https://github.com/kayac/Lobi/wiki/iOS-Implement-LobiRecSDK)**

- v5.3.3 - 2014/07/08
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.3.3.zip)
    - モジュール化したAndroid Rec SDKが、Cocos2d-xの録画に対応しました

- v5.3.2 - 2014/07/03
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.3.2.zip)
    - version.depricatedを削除

- v5.3.1 - 2014/07/02
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.3.1.zip)
    - iOS Unityのつなぎ込み部分のバグ修正

- v5.3.0 - 2014/07/01
[ダウンロード](https://github.com/kayac/Lobi/archive/v5.3.0.zip)
    - Android LobiSDKモジュール化
      - Cocos2d-x用プラグインは順次更新いたします
      
    - **AndroidのSDKについて、ディレクトリ構成やメソッド名が大きく変更されています。**
    - **詳しくは、[移行ガイド](https://github.com/kayac/Lobi/wiki/transfer-5.3.0)を御覧ください。**

- v5.2.36 - 2014/07/01
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.36.zip)
      
    - アイコンアップデートのLobiAPIを修正。  
    [https://github.com/kayac/Lobi/issues/178](https://github.com/kayac/Lobi/issues/178) 
    - 導入先アプリとのカテゴリ名の重複を防ぐ対応  
    [https://github.com/kayac/Lobi/issues/176](https://github.com/kayac/Lobi/issues/176)

- v5.2.35 - 2014/06/25  
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.35.zip)  
    - nullチェック漏れを修正  
    [https://github.com/kayac/Lobi/issues/174](https://github.com/kayac/Lobi/issues/174)
    - アプリサスペンド時に録画を継続するフラグを追加    
    - iPad popOverViewのwebViewサイズの不正表示を修正  

- v5.2.34 - 2014/06/20  
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.34.zip)  
    - お知らせ欄から返信画面に遷移した時に不正な表示となる問題  
    [https://github.com/kayac/Lobi/issues/172](https://github.com/kayac/Lobi/issues/172)
    
- v5.2.33 - 2014/06/20  
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.33.zip)  
    - iOS Unityでの録画中の画面揺れを修正  
    - 非RetinaDisplayデザイン追加  

- v5.2.32 - 2014/06/18
	[ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.32.zip)
	- Android Unityでの録画中の画面揺れを修正
	
- v5.2.31 - 2014/06/17
	[ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.31.zip)
	- マイグレーション時の不具合を修正    
	[https://github.com/kayac/Lobi/issues/168](https://github.com/kayac/Lobi/issues/168)
	
- v5.2.30 - 2014/06/13
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.30.zip)
    - Android 特定条件での色ずれを修正
    - Android 特定条件での録画中の画面揺れを修正

- v5.2.29 - 2014/06/13
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.29.zip)
    - Adreno GPUでの録画処理を高速化
    - Androidでの録画品質の調整
    - Androidでの録画ファイルの削除タイミングの変更

- v5.2.28 - 2014/06/12
	[ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.28.zip)
	- チャットのジャンプ機能不具合修正     
	[https://github.com/kayac/Lobi/issues/163](https://github.com/kayac/Lobi/issues/163)
    - 非retinaディスプレイにおける録画表示不正の修正
    - マイク入力とゲーム音声録音の分離     
	
- v5.2.27 - 2014/06/10
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.27.zip)
    - EGORefreshが重複してしまっていた問題への対応     
    [https://github.com/kayac/Lobi/issues/161](https://github.com/kayac/Lobi/issues/161)

- v5.2.26 - 2014/06/09
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.26.zip)
    - 録画非対応端末でのバグを修正
    - iOS4.3をDeploymentTargetとした場合、起動できるように改修

- v5.2.25 - 2014/06/06
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.25.zip)
    - 同じゲームで遊んでいるLobi本体のユーザーを連携時に自動追加する機能の追加     
    [https://github.com/kayac/Lobi/issues/153](https://github.com/kayac/Lobi/issues/156)
    - CMPopTipViewが競合する問題に対応する。  
    [https://github.com/kayac/Lobi/issues/157](https://github.com/kayac/Lobi/issues/157)

- v5.2.24 - 2014/05/30
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.24.zip)
    - Unity ディレクトリの移動  
    - Android Rec Unity の追加  

- v5.2.23 - 2014/05/28
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.23.zip)
    - ios4.3にて利用時にクラッシュしないようにする  
     [https://github.com/kayac/Lobi/issues/153](https://github.com/kayac/Lobi/issues/153)   


- v5.2.22 - 2014/05/23
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.22.zip)
    - 録画のポーズ機能の実装  
     [https://github.com/kayac/Lobi/issues/150](https://github.com/kayac/Lobi/issues/150)   


- v5.2.21 - 2014/05/22
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.21.zip)
    - iOS でカスタムスキーマが正しく設定されていない場合に info.plist に表示すべき項目がログに出力されない  
     [https://github.com/kayac/Lobi/issues/146](https://github.com/kayac/Lobi/issues/146)  
    - Lobiの画面が閉じているときでもオフライン状態のエラーが表示されてしまう。  
     [https://github.com/kayac/Lobi/issues/148](https://github.com/kayac/Lobi/issues/148)  
    - 1on1チャットのLobiAPIインターフェイスを追加。  
     [https://github.com/kayac/Lobi/issues/147](https://github.com/kayac/Lobi/issues/147)  

- v5.2.20 - 2014/05/15
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.20.zip)
    - UnityLandscapeアプリにて、メニューが表示されない故障を修正

- v5.2.19 - 2014/05/14
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.19.zip)
    - iOS Unity サンプルに置いてチャットシーンのスクリプトが正しくアタッチされていない  
     [https://github.com/kayac/Lobi/issues/142](https://github.com/kayac/Lobi/issues/142)
    - Android Rec cocos2d-x サンプルの追加  
     [https://github.com/kayac/Lobi/issues/143](https://github.com/kayac/Lobi/issues/143)  
    - ネットワークに接続されていない状態でRankingを取得するAPIを実行するとクラッシュする。  
     [https://github.com/kayac/Lobi/issues/144](https://github.com/kayac/Lobi/issues/144)    
    
- v5.2.18 - 2014/05/09
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.18.zip)
    - 動画投稿時にキーボードが閉じない。   
     [https://github.com/kayac/Lobi/issues/138](https://github.com/kayac/Lobi/issues/138)
    - Lobi本体アプリとの連携ボタンを押した際の挙動が不正。  
     [https://github.com/kayac/Lobi/issues/139](https://github.com/kayac/Lobi/issues/139)
    
- v5.2.17 - 2014/05/07
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.17.zip)
    - Unity のドキュメントと実装に差異がある    
    [https://github.com/kayac/Lobi/issues/135](https://github.com/kayac/Lobi/issues/135)

- v5.2.16 - 2014/05/02
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.16.zip)
    - フレームワークによる設定項目の変更を汎化    
    [https://github.com/kayac/Lobi/issues/132](https://github.com/kayac/Lobi/issues/132)
    - ハッシュタグと画像を同時に投稿するとレイアウトが崩れる問題に対応  
    [https://github.com/kayac/Lobi/issues/133](https://github.com/kayac/Lobi/issues/133)

- v5.2.15 - 2014/04/28
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.15.zip)
    - Android の追加

- v5.2.14 - 2014/04/28
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.14.zip)
    - x86_64の追加、"Debug Information Format"の項目を"DWARF"に変更   
    [https://github.com/kayac/Lobi/issues/129](https://github.com/kayac/Lobi/issues/129)
    
- v5.2.13 - 2014/04/25
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.13.zip)  
	- 外部ID利用時のアカウント情報の更新  
	[https://github.com/kayac/Lobi/issues/127](https://github.com/kayac/Lobi/issues/127)  

- v5.2.12 - 2014/04/23
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.12.zip)  
	- i386をframeworkに追加  
	[https://github.com/kayac/Lobi/issues/125](https://github.com/kayac/Lobi/issues/125)  
    - 外部ID利用時のアカウント情報取得対応  
	[https://github.com/kayac/Lobi/issues/123](https://github.com/kayac/Lobi/issues/123) 
	- プロフィール編集時のエラーアラート表示不正  
	[https://github.com/kayac/Lobi/issues/126](https://github.com/kayac/Lobi/issues/126) 

- v5.2.11 - 2014/04/22
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.11.zip)  
    - マイクプライバシー設定の状態を取得できるIF追加  
	[https://github.com/kayac/Lobi/issues/121](https://github.com/kayac/Lobi/issues/121) 


- v5.2.10 - 2014/04/21
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.10.zip)  
    - iPadにてLobiPlay参照時の表示不正  
	[https://github.com/kayac/Lobi/issues/119](https://github.com/kayac/Lobi/issues/119) 


- v5.2.9 - 2014/04/18
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.9.zip)  
    - ナビゲーションバーとチャットビュー背景カスタマイズのUnity対応  
	[https://github.com/kayac/Lobi/issues/116](https://github.com/kayac/Lobi/issues/116) 
	- プロフィール画面の編集ボタンが表示されない問題  
	[https://github.com/kayac/Lobi/issues/117](https://github.com/kayac/Lobi/issues/117) 

- v5.2.8 - 2014/04/17
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.8.zip)
    - ナビゲーションバー（ヘッダー）の背景色のカスタマイズ、チャット画面の背景色カスタマイズ機能の追加  
	[https://github.com/kayac/Lobi/issues/113](https://github.com/kayac/Lobi/issues/113) 
	
- v5.2.7 - 2014/04/16
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.7.zip)
    - iPadでのチャット表示が崩れる  
    [https://github.com/kayac/Lobi/issues/111](https://github.com/kayac/Lobi/issues/111)  
    - landscape表示時、メニューが逆からスライドする  
    [https://github.com/kayac/Lobi/issues/110](https://github.com/kayac/Lobi/issues/110)

- v5.2.6 - 2014/04/11
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.6.zip)  
    - SDK アプリ内ユーザー名の更新を反映させる  
    [https://github.com/kayac/Lobi/issues/108](https://github.com/kayac/Lobi/issues/108)  
    - 過去のバージョンのSDKも含める  
    [https://github.com/kayac/Lobi/issues/107](https://github.com/kayac/Lobi/issues/107)  
    - Lobi投稿画面にてソフトキーボード開いた後SNS導線が反応しなくなる  
    [https://github.com/kayac/Lobi/issues/106](https://github.com/kayac/Lobi/issues/106)  


- v5.2.5 - 2014/04/10
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.5.zip)  
    - 英語でローカライズされた友だち削除のラベルがプレースホルダのまま  
    [https://github.com/kayac/Lobi/issues/104](https://github.com/kayac/Lobi/issues/104)  

- v5.2.4 - 2014/04/09
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.4.zip)  
    - iOS 6.x以下のバージョンにて正しくナビゲーションバーが表示されない  
    [https://github.com/kayac/Lobi/issues/102](https://github.com/kayac/Lobi/issues/102)  


- v5.2.3 - 2014/04/09
    - Unityサンプルの更新 
    - ココそこ機能のポインタを改修 

- v5.2.2 - 2014/04/09
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.2.zip)  
    - Unityパッケージの追加  

- v5.2.1 - 2014/04/08
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.2.1.zip)  
    - Unityモジュール化対応  
    [https://github.com/kayac/Lobi/issues/96](https://github.com/kayac/Lobi/issues/96)  


- v5.2.0 - 2014/04/07
    - iOS LobiSDKモジュール化  
    [https://github.com/kayac/Lobi/issues/90](https://github.com/kayac/Lobi/issues/90)  
    - キャプチャ中任意の時点でサムネイルが取得できるようにする  
    [https://github.com/kayac/Lobi/issues/74](https://github.com/kayac/Lobi/issues/74)  

----------------------------

- v5.1.11 - 2014/04/07
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.1.11.zip)  
    - 投稿画面のSNSシェア導線を改修  
    [https://github.com/kayac/Lobi/issues/88](https://github.com/kayac/Lobi/issues/88)  

- v5.1.10 - 2014/04/02
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.1.10.zip)  
    - アフレコ終了時、録画終端あたりが切れている  
    [https://github.com/kayac/Lobi/issues/86](https://github.com/kayac/Lobi/issues/86)  

- v5.1.9 - 2014/03/28
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.1.9.zip)  
    - プレビュー時自動でUIをフェードアウトさせる  
    [https://github.com/kayac/Lobi/issues/84](https://github.com/kayac/Lobi/issues/84)  
    - アフレコ時の動画表示不正  
    [https://github.com/kayac/Lobi/issues/83](https://github.com/kayac/Lobi/issues/83)  

- v5.1.8 - 2014/03/27
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.1.8.zip)  
    - setDesignResolutionSize時、描画が正しく行われない  
    [https://github.com/kayac/Lobi/issues/81](https://github.com/kayac/Lobi/issues/81)  

- v5.1.7 - 2014/03/14
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.1.7.zip)  
    - 動画一覧を開く際に プロフィール画面 を設定できるようにする  
    [https://github.com/kayac/Lobi/issues/79](https://github.com/kayac/Lobi/issues/79)  

- v5.1.6 - 2014/03/11
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.1.6.zip)  
    - iOS 6.x以下のバージョンにて正しく録画処理がされない  
    [https://github.com/kayac/Lobi/issues/77](https://github.com/kayac/Lobi/issues/77)  

- v5.1.5 - 2014/03/10
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.1.5.zip)  
    - Unity で OnGUI でボタン等を表示している場合に録画を始めると真っ暗になる。  
    [https://github.com/kayac/Lobi/issues/22](https://github.com/kayac/Lobi/issues/22)  

- v5.1.4 - 2014/03/07
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.1.4.zip)  
    - 録画後実況を入れられるようにする  
    [https://github.com/kayac/Lobi/issues/62](https://github.com/kayac/Lobi/issues/62)  
	- KLMPlayWebViewControllerにcompletionBlockを追加  
    [https://github.com/kayac/Lobi/issues/65](https://github.com/kayac/Lobi/issues/65)  
	- KLMPostVideoViewControllerにcompletionBlockを追加  
    [https://github.com/kayac/Lobi/issues/66](https://github.com/kayac/Lobi/issues/66)  

- v5.1.3 - 2014/03/07
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.1.3.zip)  
    - ClippingNodeを利用時、録画表示が不正になる問題を修正  
    [https://github.com/kayac/Lobi/issues/70](https://github.com/kayac/Lobi/issues/70)  

- v5.1.2 - 2014/03/06
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.1.2.zip)  
    - トリミングボタンを初期化時に非表示とする  
    [https://github.com/kayac/Lobi/issues/68](https://github.com/kayac/Lobi/issues/68)  

- v5.1.1 - 2014/03/05
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.1.1.zip)  
    - 録画後実況機能を一時的に取り外す  

- v5.1.0 - 2014/02/28
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.1.0.zip)  
    - 録画後実況を入れられるようにする。  
    [https://github.com/kayac/Lobi/issues/62](https://github.com/kayac/Lobi/issues/62)  
    - ゲーム中の音やマイクは取得できるが Unity のサンプルではうまくいかない。  
    [https://github.com/kayac/Lobi/issues/16](https://github.com/kayac/Lobi/issues/16)  

> **NOTE**  
> Unity版の5.0.x バージョンから更新する場合は全てのファイルの更新及び[KLR_set_unity_pause_funcの呼び出し](https://github.com/kayac/Lobi/wiki/Unity-LobiRecSDK-Docs#wiki-2.10)を行う必要があります。
    
----

- v5.0.17 - 2014/02/24
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.0.17.zip)
    - Siriの起動や着信が発生すると音声が再生されなくなる。  
    [https://github.com/kayac/Lobi/issues/53](https://github.com/kayac/Lobi/issues/53)  

- v5.0.16 - 2014/02/21
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.0.16.zip)
    - Cocos2d/Cocos2d-xにてアプリをバックグラウンドに落とすとBGMが出力されなくなる  
    [https://github.com/kayac/Lobi/issues/58](https://github.com/kayac/Lobi/issues/58)  
    - Cocos2d-xにてアプリをバックグラウンドに落とすとループしたSEが出力されなくなる  
    [https://github.com/kayac/Lobi/issues/59](https://github.com/kayac/Lobi/issues/59)  

- v5.0.15 - 2014/02/20
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.0.15.zip)
    - capturePerFrame の初期値を 3 に変更する。  
    [https://github.com/kayac/Lobi/issues/54](https://github.com/kayac/Lobi/issues/54)  
    - micEnable の初期値を NO とする  
    [https://github.com/kayac/Lobi/issues/55](https://github.com/kayac/Lobi/issues/55)  
    - 利用規約に同意してない場合の KLMDismissingPostVideoViewControllerNotification の tryPost は false とする。  
    [https://github.com/kayac/Lobi/issues/56](https://github.com/kayac/Lobi/issues/56)  

- v5.0.14 - 2014/02/19
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.0.14.zip)
    - 実況ワイプのvertex設定を画面スケールに依存させていた。  
    [https://github.com/kayac/Lobi/issues/50](https://github.com/kayac/Lobi/issues/50)  

- v5.0.13 - 2014/02/19
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.0.13.zip)
    - 録画終了時に gameSoundVolume を開始前の状態に自動的に戻す。  
    [https://github.com/kayac/Lobi/issues/48](https://github.com/kayac/Lobi/issues/48)  

- v5.0.12 - 2014/02/18
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.0.12.zip)
    - 同じ動画を再度投稿しようとした際の KLMDismissingPostVideoViewControllerNotification の tryPost は false とする。  
    [https://github.com/kayac/Lobi/issues/42](https://github.com/kayac/Lobi/issues/42)  
    - 投稿画面の「アプリに投稿」と「一緒に共有する」が逆になっている。  
    [https://github.com/kayac/Lobi/issues/43](https://github.com/kayac/Lobi/issues/43)  
    - Twitter 等の SNS シェアのログイン画面の表示時にインジケータを表示する。  
    [https://github.com/kayac/Lobi/issues/44](https://github.com/kayac/Lobi/issues/44)  
    - 動画一覧、詳細画面のチラツキを抑止する  
    [https://github.com/kayac/Lobi/issues/45](https://github.com/kayac/Lobi/issues/45)  

- v5.0.11 - 2014/02/17
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.0.11.zip)
    - Unity で設定している KLMDismissingPostVideoViewControllerObserver 内部で別のクラスを指定している。  
    [https://github.com/kayac/Lobi/issues/36](https://github.com/kayac/Lobi/issues/36)  
    - Category は文字列とする  
    [https://github.com/kayac/Lobi/issues/37](https://github.com/kayac/Lobi/issues/37)  
    - youtubeにもアップロードできるようにする  
    [https://github.com/kayac/Lobi/issues/38](https://github.com/kayac/Lobi/issues/38)  
    - 出力された動画をトリム出来るようにする  
    [https://github.com/kayac/Lobi/issues/39](https://github.com/kayac/Lobi/issues/39)  

- v5.0.9 - 2014/02/17
	[ダウンロード](https://github.com/kayac/Lobi/archive/v5.0.9.zip)
	- 動画投稿後のポップアップを非表示にするフラグを追加する  
	[https://github.com/kayac/Lobi/issues/33](https://github.com/kayac/Lobi/issues/33)  
	- 同じ動画を複数回上げることができてしまう。  
	[https://github.com/kayac/Lobi/issues/32](https://github.com/kayac/Lobi/issues/32)  

- v5.0.8 - 2014/02/13
	[ダウンロード](https://github.com/kayac/Lobi/archive/v5.0.8.zip)
	- 動画投稿時にアップロードが完了するまでにしばらく時間がかかることを表示する。  
	[https://github.com/kayac/Lobi/issues/24](https://github.com/kayac/Lobi/issues/27)  
	- iPod touch 第五世代で音が正しく扱えない  
	[https://github.com/kayac/Lobi/issues/25](https://github.com/kayac/Lobi/issues/28)  

- v5.0.7 - 2014/02/12
	[ダウンロード](https://github.com/kayac/Lobi/archive/v5.0.7.zip)
	- SDK 内の動画詳細から動画再生を押下後、動画読み込み中がわかるようにする。  
	[https://github.com/kayac/Lobi/issues/24](https://github.com/kayac/Lobi/issues/24)  
	- 動画シェア時にクリップボードに URL がコピーできない。  
	[https://github.com/kayac/Lobi/issues/25](https://github.com/kayac/Lobi/issues/25)  

- v5.0.6 - 2014/02/10
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.0.6.zip)
    - 録画終了時に組み込みアプリのパフォーマンスが一時的に悪くなる。  
    [https://github.com/kayac/Lobi/issues/5](https://github.com/kayac/Lobi/issues/5)  
    - ScoreID ではなく Category とする。  
    [https://github.com/kayac/Lobi/issues/17](https://github.com/kayac/Lobi/issues/17)  
    - Ranking となっているところを Rec に名称を統一する。  
    [https://github.com/kayac/Lobi/issues/19](https://github.com/kayac/Lobi/issues/19)  
    - Lobi/Line 投稿時の文言がわかりにくいので修正する。  
    [https://github.com/kayac/Lobi/issues/20](https://github.com/kayac/Lobi/issues/20)  

- v5.0.5 - 2014/02/06
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.0.5.zip)
	- 動画投稿時のバリデーション不正を修正  
	[https://github.com/kayac/Lobi/issues/15](https://github.com/kayac/Lobi/issues/15)  

- v5.0.4 - 2014/02/06
	- GLKit サンプルを追加
	- 横画面の投稿画面UIを改善  
	[https://github.com/kayac/Lobi/issues/11](https://github.com/kayac/Lobi/issues/11)  
	- 投稿画面でのSNS投稿UIを改善  
	[https://github.com/kayac/Lobi/issues/12](https://github.com/kayac/Lobi/issues/12)  
	- 投稿失敗時のステータスを通知するように修正  
	[https://github.com/kayac/Lobi/issues/13](https://github.com/kayac/Lobi/issues/13)  
	
- v5.0.3 - 2014/02/04
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.0.3.zip)
	- 録画開始時のパフォーマンス修正の影響を収束させるため、録音の初期化を同期処理に戻す。
	[https://github.com/kayac/Lobi/issues/1](https://github.com/kayac/Lobi/issues/1)  

- v5.0.2 - 2014/02/04
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.0.2.zip)
	- 横画面で動画投稿画面表示時にタイトル等の入力欄やプレビューが表示されないことがある問題を修正  
    [https://github.com/kayac/Lobi/issues/2](https://github.com/kayac/Lobi/issues/2)
    - 横画面で Twitter, Facebook の認証が縦画面の幅で表示される問題を修正  
    [https://github.com/kayac/Lobi/issues/3](https://github.com/kayac/Lobi/issues/3)
    - 動画リストのメニュー幅が横画面時正しく表示されない問題を修正  
	[https://github.com/kayac/Lobi/issues/6](https://github.com/kayac/Lobi/issues/6)

- v5.0.1 - 2014/02/04
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.0.1.zip)
    - 録画開始時に組み込みアプリのパフォーマンスが一時的に悪くなる問題を修正  
    [https://github.com/kayac/Lobi/issues/1](https://github.com/kayac/Lobi/issues/1)

- v5.0.0 - 2014/01/31
    [ダウンロード](https://github.com/kayac/Lobi/archive/v5.0.0.zip)
    - リリース


利用規約
------------
開発会社等利用規約  
[https://developer.lobi.co/ja/terms](https://developer.lobi.co/ja/terms)  

Terms of Use for Developers  
[https://developer.lobi.co/en/terms](https://developer.lobi.co/en/terms)  
