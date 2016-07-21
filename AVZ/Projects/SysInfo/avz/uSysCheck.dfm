object SysCheck: TSysCheck
  Left = 198
  Top = 121
  Width = 738
  Height = 505
  BorderIcons = [biSystemMenu]
  Caption = '$AVZ0870'
  Color = clBtnFace
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  Scaled = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 16
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 730
    Height = 314
    Align = alClient
    Caption = ' $AVZ1008 '
    TabOrder = 0
    DesignSize = (
      730
      314)
    object cbProcess: TCheckBox
      Left = 8
      Top = 24
      Width = 193
      Height = 17
      Caption = '$AVZ0287'
      Checked = True
      State = cbChecked
      TabOrder = 0
    end
    object cbProcessLib: TCheckBox
      Left = 24
      Top = 45
      Width = 177
      Height = 17
      Caption = '$AVZ0075'
      Checked = True
      State = cbChecked
      TabOrder = 1
    end
    object cbKernelModules: TCheckBox
      Left = 8
      Top = 90
      Width = 209
      Height = 17
      Caption = '$AVZ0430'
      Checked = True
      State = cbChecked
      TabOrder = 2
    end
    object cbAutorun: TCheckBox
      Left = 8
      Top = 107
      Width = 209
      Height = 17
      Caption = '$AVZ0038'
      Checked = True
      State = cbChecked
      TabOrder = 3
    end
    object cbSPI: TCheckBox
      Left = 8
      Top = 124
      Width = 209
      Height = 17
      Caption = '$AVZ0464'
      Checked = True
      State = cbChecked
      TabOrder = 4
    end
    object cbService: TCheckBox
      Left = 8
      Top = 72
      Width = 153
      Height = 17
      Caption = '$AVZ1002'
      Checked = True
      State = cbChecked
      TabOrder = 5
    end
    object cbOpenPorts: TCheckBox
      Left = 8
      Top = 140
      Width = 209
      Height = 17
      Caption = '$AVZ0785'
      Checked = True
      State = cbChecked
      TabOrder = 6
    end
    object cbIEExt: TCheckBox
      Left = 8
      Top = 156
      Width = 313
      Height = 17
      Caption = '$AVZ0431'
      Checked = True
      State = cbChecked
      TabOrder = 7
    end
    object cbProcessMode: TComboBox
      Left = 200
      Top = 38
      Width = 522
      Height = 24
      Style = csDropDownList
      Anchors = [akLeft, akTop, akRight]
      ItemHeight = 16
      TabOrder = 8
      Items.Strings = (
        '$AVZ1034'
        '$AVZ1039')
    end
    object cbExplorerExt: TCheckBox
      Left = 8
      Top = 172
      Width = 241
      Height = 17
      Caption = '$AVZ0434'
      Checked = True
      State = cbChecked
      TabOrder = 9
    end
    object cbPrintExt: TCheckBox
      Left = 8
      Top = 188
      Width = 497
      Height = 17
      Caption = '$AVZ0436'
      Checked = True
      State = cbChecked
      TabOrder = 10
    end
    object cbTaskScheduler: TCheckBox
      Left = 8
      Top = 204
      Width = 321
      Height = 17
      Caption = '$AVZ0261'
      Checked = True
      State = cbChecked
      TabOrder = 11
    end
    object cbHosts: TCheckBox
      Left = 8
      Top = 220
      Width = 169
      Height = 17
      Caption = '$AVZ0270'
      Checked = True
      State = cbChecked
      TabOrder = 12
    end
    object cbProtocols: TCheckBox
      Left = 8
      Top = 236
      Width = 241
      Height = 17
      Caption = '$AVZ0872'
      Checked = True
      State = cbChecked
      TabOrder = 13
    end
    object cbServiceMode: TComboBox
      Left = 200
      Top = 62
      Width = 522
      Height = 24
      Style = csDropDownList
      Anchors = [akLeft, akTop, akRight]
      ItemHeight = 16
      TabOrder = 14
      Items.Strings = (
        '$AVZ1066'
        '$AVZ0155')
    end
    object cbDPF: TCheckBox
      Left = 8
      Top = 252
      Width = 297
      Height = 17
      Caption = 'Downloaded Program Files (DPF)'
      Checked = True
      State = cbChecked
      TabOrder = 15
    end
    object cbCPL: TCheckBox
      Left = 8
      Top = 268
      Width = 289
      Height = 17
      Caption = '$AVZ0067'
      Checked = True
      State = cbChecked
      TabOrder = 16
    end
    object cbAS: TCheckBox
      Left = 8
      Top = 284
      Width = 217
      Height = 17
      Caption = '$AVZ0800'
      Checked = True
      State = cbChecked
      TabOrder = 17
    end
  end
  object GroupBox2: TGroupBox
    Left = 0
    Top = 314
    Width = 730
    Height = 105
    Align = alBottom
    Caption = ' $AVZ0695 '
    TabOrder = 1
    object cbHideGoodFiles: TCheckBox
      Left = 5
      Top = 18
      Width = 433
      Height = 17
      Caption = '$AVZ0314'
      Checked = True
      State = cbChecked
      TabOrder = 0
    end
    object cbAddLastLog: TCheckBox
      Left = 5
      Top = 35
      Width = 364
      Height = 17
      Caption = '$AVZ0219'
      Checked = True
      State = cbChecked
      TabOrder = 1
    end
    object cbZipArchive: TCheckBox
      Left = 5
      Top = 51
      Width = 412
      Height = 17
      Caption = '$AVZ1023'
      TabOrder = 2
    end
    object cbAddScript: TCheckBox
      Left = 5
      Top = 67
      Width = 499
      Height = 17
      Caption = '$AVZ0215'
      Checked = True
      State = cbChecked
      TabOrder = 3
    end
    object cbXMLRep: TCheckBox
      Left = 5
      Top = 82
      Width = 540
      Height = 17
      Caption = '$AVZ1022'
      Checked = True
      State = cbChecked
      TabOrder = 4
    end
  end
  object Panel1: TPanel
    Left = 0
    Top = 419
    Width = 730
    Height = 52
    Align = alBottom
    TabOrder = 2
    DesignSize = (
      730
      52)
    object mbStart: TBitBtn
      Left = 7
      Top = 20
      Width = 75
      Height = 25
      Hint = '$AVZ0280'
      Caption = '$AVZ0882'
      TabOrder = 0
      OnClick = mbStartClick
      Glyph.Data = {
        E6080000424DE60800000000000036040000280000003C000000140000000100
        080000000000B004000000000000000000000001000000000000000000000000
        80000080000000808000800000008000800080800000C0C0C000C0DCC000F0CA
        A6000020400000206000002080000020A0000020C0000020E000004000000040
        20000040400000406000004080000040A0000040C0000040E000006000000060
        20000060400000606000006080000060A0000060C0000060E000008000000080
        20000080400000806000008080000080A0000080C0000080E00000A0000000A0
        200000A0400000A0600000A0800000A0A00000A0C00000A0E00000C0000000C0
        200000C0400000C0600000C0800000C0A00000C0C00000C0E00000E0000000E0
        200000E0400000E0600000E0800000E0A00000E0C00000E0E000400000004000
        20004000400040006000400080004000A0004000C0004000E000402000004020
        20004020400040206000402080004020A0004020C0004020E000404000004040
        20004040400040406000404080004040A0004040C0004040E000406000004060
        20004060400040606000406080004060A0004060C0004060E000408000004080
        20004080400040806000408080004080A0004080C0004080E00040A0000040A0
        200040A0400040A0600040A0800040A0A00040A0C00040A0E00040C0000040C0
        200040C0400040C0600040C0800040C0A00040C0C00040C0E00040E0000040E0
        200040E0400040E0600040E0800040E0A00040E0C00040E0E000800000008000
        20008000400080006000800080008000A0008000C0008000E000802000008020
        20008020400080206000802080008020A0008020C0008020E000804000008040
        20008040400080406000804080008040A0008040C0008040E000806000008060
        20008060400080606000806080008060A0008060C0008060E000808000008080
        20008080400080806000808080008080A0008080C0008080E00080A0000080A0
        200080A0400080A0600080A0800080A0A00080A0C00080A0E00080C0000080C0
        200080C0400080C0600080C0800080C0A00080C0C00080C0E00080E0000080E0
        200080E0400080E0600080E0800080E0A00080E0C00080E0E000C0000000C000
        2000C0004000C0006000C0008000C000A000C000C000C000E000C0200000C020
        2000C0204000C0206000C0208000C020A000C020C000C020E000C0400000C040
        2000C0404000C0406000C0408000C040A000C040C000C040E000C0600000C060
        2000C0604000C0606000C0608000C060A000C060C000C060E000C0800000C080
        2000C0804000C0806000C0808000C080A000C080C000C080E000C0A00000C0A0
        2000C0A04000C0A06000C0A08000C0A0A000C0A0C000C0A0E000C0C00000C0C0
        2000C0C04000C0C06000C0C08000C0C0A000F0FBFF00A4A0A000808080000000
        FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00FDFDFDFDFDFD
        FDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFD
        FDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFD020202
        020202FDFDFDFDFDFDFDFDFDFDFDFDFDFDA4A4A4A4A4A4FDFDFDFDFDFDFDFDFD
        FDFDFDFDFD020202020202FDFDFDFDFDFDFDFDFDFDFDFD020202020202020202
        02FDFDFDFDFDFDFDFDFDFDA4A4A4A4A4A4A4A4A4A4FDFDFDFDFDFDFDFDFDFD02
        020202020202020202FDFDFDFDFDFDFDFDFD020228282828282828020202FDFD
        FDFDFDFDFDFDA4A4F7F7F7F7F7F7F7F7A4A4FDFDFDFDFDFDFDFD020228282828
        282828020202FDFDFDFDFDFDFD0228282810102828282828280202FDFDFDFDFD
        FDA4F7F7F7A4A4F7F7F7F7F7F7A4A4FDFDFDFDFDFD0228282810102828282828
        280202FDFDFDFDFD022828282818FF182828282828280202FDFDFDFDA4F7F7F7
        F7A4FFA4F7F7F7F7F7F7A4A4FDFDFDFD022828282818FB182828282828280202
        FDFDFDFD022828282818FFFF1828282828280202FDFDFDFDA4F7F7F7F7A4FFFF
        A4F7F7F7F7F7A4A4FDFDFDFD022828282818FBFB1828282828280202FDFDFD02
        282828282818FFFFFF1828282828280202FDFD07F7F7F7F7F7A4FFFFFFA4F7F7
        F7F7F7A4A4FDFD02282828282818FBFBFB1828282828280202FDFD2828282828
        2818FFFFFFFF18282828280202FDFDF7F7F7F7F7F7A4FFFFFFFFA4F7F7F7F7A4
        A4FDFD28282828282818FBFBFBFB18282828280202FDFD28282828282818FFFF
        FFFFFF182828280202FDFD07F7F7F7F7F7A4FFFFFFFFFFA4F7F7F7A4A4FDFD28
        282828282818FBFBFBFBFB182828280202FDFD28282828282818FFFFFFFFFFFF
        1828280202FDFD07F7F7F7F7F7A4FFFFFFFFFFFFA4F7F7A4A4FDFD2828282828
        2818FBFBFBFBFBFB1828280202FDFD28282828282818FFFFFFFFFF1828282802
        02FDFD07F7F7F7F7F7A4FFFFFFFFFFA4F7F7F7A4A4FDFD28282828282818FBFB
        FBFBFB182828280202FDFD28282828282818FFFFFFFF18282828280202FDFD07
        F7F7F7F7F7A4FFFFFFFFA4F7F7F7F7A4A4FDFD28282828282818FBFBFBFB1828
        2828280202FDFDFD282828282818FFFFFF18282828282802FDFDFDFD07F7F7F7
        F7A4FFFFFFA4F7F7F7F7F7A4FDFDFDFD282828282818FBFBFB18282828282802
        FDFDFDFD283028282818FFFF1828282828280202FDFDFDFDF7F7F7F7F7A4FFFF
        A4F7F7F7F7F7A4A4FDFDFDFD283028282818FBFB1828282828280202FDFDFDFD
        FD2830282818FF1828282828280202FDFDFDFDFDFD07F7F7F7A4FFA4F7F7F7F7
        F7A4A4FDFDFDFDFDFD2830282818FB1828282828280202FDFDFDFDFDFDFD2830
        28181828282828280202FDFDFDFDFDFDFDFD07F7F7A4A4F7F7F7F7F7A4A4FDFD
        FDFDFDFDFDFD283028181828282828280202FDFDFDFDFDFDFDFDFD2830282828
        2828282828FDFDFDFDFDFDFDFDFDFD07F7F7F7F7F7F7F7F7A4FDFDFDFDFDFDFD
        FDFDFD28302828282828282828FDFDFDFDFDFDFDFDFDFDFDFD282828282828FD
        FDFDFDFDFDFDFDFDFDFDFDFDFDF707070707F7FDFDFDFDFDFDFDFDFDFDFDFDFD
        FD282828282828FDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFD
        FDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFD
        FDFDFDFDFDFDFDFDFDFD}
      NumGlyphs = 3
    end
    object BitBtn1: TBitBtn
      Left = 87
      Top = 20
      Width = 90
      Height = 25
      Hint = '$AVZ0266'
      Caption = '$AVZ0266'
      TabOrder = 1
      Kind = bkCancel
    end
    object ProgressBar: TProgressBar
      Left = 7
      Top = 3
      Width = 719
      Height = 15
      Anchors = [akLeft, akTop, akRight]
      Max = 15
      Step = 1
      TabOrder = 2
    end
  end
  object SaveDialog: TSaveDialog
    DefaultExt = 'htm'
    Filter = '$AVZ0015'
    Title = '$AVZ1027'
    Left = 344
    Top = 88
  end
end
